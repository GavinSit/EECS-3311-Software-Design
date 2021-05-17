note
	description: "Holds all the game information as well as game actions. Assumes client already checked its valid action"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CONTROLLER

create
	make

feature --constructor
	make
		local
			sia: SHARED_INFORMATION_ACCESS
			sua: STRING_UPDATE_ACCESS
		do
			info := sia.shared_info
			su := sua.string_update

			create g.make
			create explorer.make ('E', 0) --make the explorer
			create movable_entities.make (0)
			create movements.make_empty --empty movement array
			create deaths.make_empty

			create board_array.make_filled (create {SECTOR}.make_dummy, info.number_rows, info.number_columns)
			ingame := false --not in game by default
		end

feature {NONE} --attributes
	info: SHARED_INFORMATION
	su: STRING_UPDATE
	du: DIRECTION_UTILITY
	g: GALAXY

feature {NONE} --game attributes
	board_array: ARRAY2 [SECTOR] -- 2D array representing the board
	explorer: ENTITY_EXPLORER --the explorer
	movable_entities: ARRAYED_LIST[ENTITY_MOVABLE] --the planets
	ingame: BOOLEAN --stores if in game or not
	movements: ARRAY [STRING] --entity movement
	deaths: ARRAY [STRING]

feature --queries
	get_ingame: BOOLEAN
			--is explorer in game
		do
			Result := ingame
		end

	get_explorer: ENTITY_EXPLORER
			--return explorer
		do
			Result := explorer --maybe?
		end

	get_potential_location (loc: TUPLE [row: INTEGER; col: INTEGER]; dir: INTEGER_32): TUPLE [row: INTEGER; col: INTEGER]
			--get the potential location given current location and number direciton
		local
			direction, new_loc: TUPLE [row: INTEGER; col: INTEGER]
		do
			direction := du.num_dir (dir)
			create new_loc.default_create

			if loc.row + direction.row > info.number_rows then --if row out of upper bound
				new_loc.row := 1
			elseif loc.row + direction.row < 1 then --if out of lower bound
				new_loc.row := info.number_rows
			else --in bounds
				new_loc.row := loc.row + direction.row
			end

			if loc.col + direction.col > info.number_columns then --if col out of upper bound
				new_loc.col := 1
			elseif loc.col + direction.col < 1 then --if col out of lower bound
				new_loc.col := info.number_columns
			else
				new_loc.col := loc.col + direction.col
			end

			Result := new_loc
		end

	get_entities : ARRAYED_LIST [ENTITY_ALPHABET]
			--returns sorted list of all entity objects
		do
			create Result.make (0)
			Result.compare_objects

			across 1 |..| info.number_rows is row loop
				across 1 |..| info.number_columns is col loop
					across board_array[row, col].contents is entity loop
						Result.force (entity)
					end
				end
			end
			Result := sort(Result) --sort in accending order
		end

	get_planets : ARRAYED_LIST [ENTITY_ALPHABET]
			--returns movable entities (planets
		local
			entities: ARRAYED_LIST [ENTITY_ALPHABET]
		do
			create Result.make (0)

			entities := get_entities

			across entities is planet loop
				if planet.id > 0 then
					Result.force (planet)
				end
			end
		end

	game_board : STRING
			--returns the game board in a string
		do
			Result := g.out
		end

	game_board_array : ARRAY2 [SECTOR]
		do
			Result := board_array
		end

	in_blackhole : BOOLEAN
			--checks if in backhole and sets corresponding messages if so and end game
		do
			Result := explorer.get_location ~ [3, 3]
		end

	has_yellow_dwarf: BOOLEAN
			--check if there is yellow dwarf in sector
		local
			loc: TUPLE [row: INTEGER; col: INTEGER]
		do
			loc := explorer.get_location
			Result := board_array[loc.row, loc.col].has_entity ('Y')
		end

	has_planet : BOOLEAN
			--check if there is planet in this sector
			--NOTE: cannot land unless there is both planet and yellow dwarf
		local
			loc: TUPLE [row: INTEGER; col: INTEGER]
		do
			loc := explorer.get_location
			Result := board_array[loc.row, loc.col].has_entity ('P')
		end

	entities_index_of (a_id: INTEGER) : ENTITY_ALPHABET
			--returns entity with a_id
		require
			id_exists: across get_entities is entity some entity.id = a_id end
		local
			found: BOOLEAN
			entities: ARRAYED_LIST [ENTITY_ALPHABET]
		do
			entities := get_entities
			create Result.make ('E', 0) --will never return this

			from
				entities.start
				found := false
			until
				entities.after or found
			loop
				if entities.item.id = a_id then
					Result := entities.item
					found := true
				end
				entities.forth
			end
		end

	get_movement_as_string : STRING
			--return movements as a string; returns none if no movement
		do
			create Result.make_empty

			if movements.count = 0 then --if no movements
				Result.append ("none")
			else
				Result.append ("%N")
				across movements is str loop
					Result.append ("    " + str + "%N")
				end
				Result := Result.substring (1, Result.count-1) --remove last %N
			end
		end

	get_deaths_as_string : STRING
			--get deaths as string; returns none if no deaths this round
		do
			create Result.make_empty

			if deaths.count = 0 then --no deaths
				Result := "none"
			else
				Result.append ("%N")
				across deaths is str loop
					Result.append ("    " + str + "%N")
				end
				Result := Result.substring (1, Result.count-1) --remove last %N
			end
		end

feature --commands
	set_ingame (b: BOOLEAN)
			--set in game status
		do
			ingame := b
		end

	galaxy_update
			--update all the stuff that happens in the galaxy in a turn after explorer moves or during a pass
		local
			entities: ARRAYED_LIST [ENTITY_ALPHABET] --all the movable entities stored here (excluding explorer) in acending order by id
			loc: TUPLE [row: INTEGER; col: INTEGER]
		do
			entities := get_planets --planets sorted by lowest to highest id
			--iterate through all the planets
			from
				entities.start
			until
				entities.after
			loop
				check attached {ENTITY_MOVABLE} entities.item as planet then
					if planet.get_turns_left = 0 then --if its their turn to move
						loc := planet.get_location
						if game_board_array[loc.row, loc.col].has_star then --if sector has a star
							planet.set_attached (true)
							planet.set_turns (-1) --set to -1 so it'll show N/A when showing turns left
							if game_board_array[loc.row, loc.col].has_entity ('Y') then --if there is yellow dwarf, chance to support life
								planet.support_life_generate --generate a chance to support life
							end
						else --if no star, then move planet
							move_adjacent(planet) --move to adjacent sector
						end
					else --not their turn to move
						planet.decrement_turns
					end
				end --end check attached
				entities.forth
			end --end loop
		end

	reset_movements
			--done one turn so reset movement to be reused again
		do
			movements.make_empty
		end

	reset_deaths
			--reset the death array to be reused next round
		do
			deaths.make_empty
		end

feature {NONE}--planet commands
	move_adjacent(planet: ENTITY_MOVABLE)
			--move planet to random adjacent sector and if still alive, then check if it can be attached
		local
			gen: RANDOM_GENERATOR_ACCESS
			new_loc: TUPLE [row: INTEGER; col: INTEGER]
			old_loc_string: STRING --old location as string
		do
			old_loc_string := "[" + planet.get_location.row.out + "," + planet.get_location.col.out + ","
			old_loc_string.append (planet.sector_place.out + "]")

			new_loc := get_potential_location (planet.get_location, gen.rchoose (1, 8)) --generate new direction

			if not game_board_array [new_loc.row, new_loc.col].is_full then --if sector isnt full then move there
				game_board_array [planet.get_location.row, planet.get_location.col].remove_by_id (planet.id)--remove from old location
				game_board_array [new_loc.row, new_loc.col].place (planet) --add to new location
			end

			append_movement (planet, old_loc_string)

			if not (new_loc.row ~ 3 and new_loc.col ~ 3) then --if not in black hole
				check_for_star (planet) --check if there is planet in new sector and generate new turns
			else --if in black hole
				game_board_array [3, 3].remove_by_id (planet.id)
				append_death (planet)
			end
		end

	check_for_star(planet: ENTITY_MOVABLE)
			--planet behaviour
		local
			gen: RANDOM_GENERATOR_ACCESS
		do
			if game_board_array[planet.get_location.row, planet.get_location.col].has_star then --if there is star in new location
				planet.set_attached (true)
				planet.set_turns (-1)
				if game_board_array[planet.get_location.row, planet.get_location.col].has_entity ('Y') then --if there is 'Y', then potentially support life
					planet.support_life_generate
				end
			else
				planet.set_turns (gen.rchoose (0, 2))
			end
		end

feature --game commands
	new_game (mode: STRING)
			--starts a new game under a pre-set threshold
		require
			correct_mode: mode ~ "play" or mode ~ "test"
		do
			info.reset
			g.make_galaxy
			check attached {ENTITY_EXPLORER}  g.grid[1, 1].contents[1] as e then
				explorer := e --first element is explorer
			end

			set_ingame (true)

			board_array := g.grid
			su.set_mode (mode)
		end

	end_game
			--ends the game for whatever reason
		do
			set_ingame (false)
			create board_array.make_filled (create {SECTOR}.make_dummy, info.number_rows, info.number_columns)
		end

	move(dir: INTEGER_32)
			--move in a direction
			--note: if at the end of a board, moves to the other side
		local
			loc: TUPLE [row: INTEGER; col: INTEGER] --current coords
			new_loc: TUPLE [row: INTEGER; col: INTEGER]
			old_loc_string: STRING
		do
			loc := explorer.get_location
			new_loc := get_potential_location (loc, dir) --gets the new location of the explorer

			old_loc_string := "[" + loc.row.out + "," + loc.col.out + "," + explorer.sector_place.out + "]" --store old location before moving as string

			game_board_array [loc.row, loc.col].remove_by_id (explorer.id) --remove E from old location
--			explorer.set_explorer_location (new_loc) --set new location
			explorer.lower_fuel

			game_board_array [new_loc.row, new_loc.col].place (explorer) --set E in new location
			append_movement (explorer, old_loc_string)

			if explorer.get_fuel = 0 then --if out of fuel, remove explorer
				game_board_array [new_loc.row, new_loc.col].remove_by_id (explorer.id)
				explorer.kill_explorer
				append_death (explorer)
			elseif in_blackhole then --if in black hole then place E in new location
				game_board_array [3, 3].remove_by_id (explorer.id) --remove from blackhole so doesnt show up
				explorer.kill_explorer --sets life to 0
				append_death (explorer)
--				end_game --no longer playing
			end

			galaxy_update
		end

	pass
			--todo: just update galaxy without moving
		do
			galaxy_update
		end

	enter_wormhole
			--teleport to location that is empty
		local
			added: BOOLEAN
			row, col: INTEGER
			gen: RANDOM_GENERATOR_ACCESS
			old_loc: STRING
		do
			from
				added := false

			until
				added
			loop
				row := gen.rchoose (1, 5)
				col := gen.rchoose (1, 5)

				if not game_board_array[row, col].is_full then --if valid location is found
					old_loc := "[" + explorer.get_location.row.out + "," + explorer.get_location.col.out + "," + explorer.sector_place.out + "]"
					game_board_array [explorer.get_location.row, explorer.get_location.col].remove_by_id (explorer.id) --remove E from old location

--					explorer.set_explorer_location ([row, col])
					game_board_array [row, col].place (explorer)

					append_movement (explorer, old_loc) --add movements

					if in_blackhole then --only print character if not in blackhole
						game_board_array [row, col].remove_by_id (explorer.id) --remove from blackhole so doesnt show up
						append_death (explorer)
--						end_game
					end
					added := true
				end
			end

			galaxy_update
		end

	land
			--explorer land on first avaliable planet that hasnt been visited yet
			--NOTE: doesnt check if there is life, just lands on first avaliable planet
		local
			loc: TUPLE [row: INTEGER; col: INTEGER]
			planet_landed_on: BOOLEAN -- true when found first avaliable planet
			sector: ARRAYED_LIST [ENTITY_ALPHABET]
		do
			loc := explorer.get_location
			sector := game_board_array[loc.row, loc.col].contents

			--find a location to land
			from
				sector.start
				planet_landed_on := false
			until
				planet_landed_on or sector.after
			loop
				if sector.item.id > 0 then --id > 0 means is planet
					check attached {ENTITY_MOVABLE} sector.item as planet then
						if not planet.get_visited then
							planet.set_visited
							explorer.set_landed (true)
							explorer.set_land_location (planet.id)
							planet_landed_on := true
						end
					end --end check
				end
				sector.forth
			end --end loop

			galaxy_update
		end

	liftoff
			--liftoff from planet
		do
			explorer.set_landed (false)

			galaxy_update
		end

feature --string queries
	entities_description: STRING
			--returns entities in a list as well as a description
		local
--			a: ARRAY [TUPLE [id: INTEGER; s: STRING]]
			a: ARRAYED_LIST [ENTITY_ALPHABET]
			item: STRING
		do
			create Result.make_empty
			a := get_entities

			--loop across contents of each sector
			across a is c loop
				item := "    " + c.out + "->"
				if c.id > 0 then --if planet
					if attached {ENTITY_MOVABLE} c as planet then
						item.append (planet_items (planet))
					end
				elseif c.id < 0 and (c.item ~ '*' or c.item ~ 'Y') then --if stationary
					item.append ("Luminosity:")
					if attached {ENTITY_STAR} c as star then
						item.append (star.get_luminosity.out)
					end
				elseif c.id ~ 0 then --if explorer
					item.append (explorer_items)
				end
				item.append ("%N")
				Result.append (item)
			end
		end

	sectors_update: STRING
			--return description of sectors and their entities
		local
			temp_sector: SECTOR
		do
			create Result.make_empty

			across 1 |..| info.number_rows is row loop
				across 1 |..| info.number_columns  is col loop
					Result.append ("    [" + row.out + "," + col.out + "]->")

					temp_sector := board_array[row, col] --sector we working on

					across 1 |..| info.max_capacity is i loop
						Result.append (temp_sector.entity_at_place_out (i))
						if i /= 4 then --if not the last iteration
							Result.append (",")
						end
					end

					Result.append ("%N")
				end --end col
			end --end row
		end


feature {NONE} --internal use
--	continue_game : BOOLEAN
--			--checks if you can still play after moving; stops when you land and find life
--		do
----			Result := not in_blackhole and not (explorer.get_life = 0) and not (explorer.get_fuel = 0)
--			Result := not explorer.get_life
--		end

	sort (a: ARRAYED_LIST [ENTITY_ALPHABET]) : ARRAYED_LIST [ENTITY_ALPHABET]
			--sort by lowest to highest id
		local
			temp: ENTITY_ALPHABET
			swap: BOOLEAN
			i: INTEGER
		do
			swap := true
			from
				i := 1
			until
				i > a.count or not swap
			loop
				swap := false
				across 1 |..| (a.count-1) is j loop
					if a[j].id > a[j+1].id then
						temp := a[j]
						a[j] := a[j+1]
						a[j+1] := temp
						swap := true
					end
				end
				i := i + 1
			end
			Result := a
		end

	explorer_items : STRING
			--the explorer outputs
		do
			create Result.make_empty
			Result.append ("fuel:" + explorer.get_fuel.out + "/" + explorer.max_fuel.out)
			Result.append (", life:" + explorer.get_life.out + "/" + explorer.max_life.out)
			Result.append (", landed?:")
			if explorer.get_landed then
				Result.append ("T")
			else
				Result.append ("F")
			end
		end

	planet_items(p: ENTITY_MOVABLE) : STRING
			--the planet outputs
		do
			create Result.make_empty
			Result.append ("attached?:" +  p.get_attached_string)
			Result.append (", support_life?:" + p.get_support_life_string)
			Result.append (", visited?:" + p.get_visited_string)
			Result.append (", turns_left:")
			if not (p.get_location.row = 3 and p.get_location.col = 3) and not (p.get_turns_left = -1) and not p.get_attached then --if location is not [3,3] (blackhole), and its not attached
				Result.append (p.get_turns_left.out)
			else
				Result.append ("N/A")
			end
		end

	append_movement(entity: ENTITY_ALPHABET; old_location: STRING)
			--append the start and finish movement to array; old loc in the format [x,y,z]
		local
			s: STRING
			current_loc: STRING
		do
			s := entity.out + ":" + old_location

			if entity.item ~ 'P' then
				check attached {ENTITY_MOVABLE} entity as planet then
					current_loc := "[" + planet.get_location.row.out + "," + planet.get_location.col.out + ","
					if not (old_location.substring (1, old_location.count-2) ~ current_loc) then --if moved and not the same location
						s.append ("->" + current_loc + planet.sector_place.out + "]")
					end
				end
			elseif entity.item ~ 'E' then
				s.append ("->[" + explorer.get_location.row.out + "," + explorer.get_location.col.out + ",")
				s.append (explorer.sector_place.out)
				s.append ("]")
			end

			movements.force(s, movements.count+1)
		end

	append_death (entity: ENTITY_ALPHABET)
		local
			s: STRING
		do
			s := entity.out + "->"

			if entity.item ~ 'P' then
				check attached {ENTITY_MOVABLE} entity as planet then
					s.append (planet_items (planet) + ",%N")
					s.append ("    " + su.msg_planet_died)
				end
			elseif entity.item ~ 'E' then
				s.append (explorer_items + ",%N")
				if explorer.get_location.row = 3 and explorer.get_location.col = 3 then --in black hole
					s.append ("    " + su.msg_blackhole)
				elseif explorer.get_fuel = 0 then --out of fuel
					s.append ("    " + su.msg_out_of_fuel (explorer.location_out))
				end
			end

			deaths.force (s, deaths.count+1)
		end

end

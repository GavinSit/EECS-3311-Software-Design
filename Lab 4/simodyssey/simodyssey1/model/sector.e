note
	description: "Represents a sector in the galaxy."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SECTOR

create
	make, make_dummy

feature -- attributes
	shared_info_access : SHARED_INFORMATION_ACCESS

	shared_info: SHARED_INFORMATION
		attribute
			Result:= shared_info_access.shared_info
		end

	gen: RANDOM_GENERATOR_ACCESS

	contents: ARRAYED_LIST [ENTITY_ALPHABET] --holds 4 quadrants

	row: INTEGER

	column: INTEGER

feature -- constructor
	make(row_input: INTEGER; column_input: INTEGER; a_explorer:ENTITY_EXPLORER)
		--initialization
		require
			valid_row: (row_input >= 1) and (row_input <= shared_info.number_rows)
			valid_column: (column_input >= 1) and (column_input <= shared_info.number_columns)
		do
			row := row_input
			column := column_input
			create contents.make (shared_info.max_capacity) -- Each sector should have 4 quadrants
			contents.compare_objects
			if (row = 3) and (column = 3) then
				put (create {ENTITY_ALPHABET}.make ('O', -1)) -- If this is the sector in the middle of the board, place a black hole
			else
				if (row = 1) and (column = 1) then
					put (a_explorer) -- If this is the top left corner sector, place the explorer there
				end
				populate -- Run the populate command to complete setup
			end -- if
		end

feature -- commands
	make_dummy
		--initialization without creating entities in quadrants
		do
			create contents.make (shared_info.max_capacity)
			contents.compare_objects
		end

	populate
			-- this feature creates 1 to max_capacity-1 components to be intially stored in the
			-- sector. The component may be a planet or nothing at all.
		local
			threshold: INTEGER
			number_items: INTEGER
			loop_counter: INTEGER
			component: ENTITY_MOVABLE
			turn :INTEGER
		do
			number_items := gen.rchoose (1, shared_info.max_capacity-1)  -- MUST decrease max_capacity by 1 to leave space for Explorer (so a max of 3)
			from
				loop_counter := 1
			until
				loop_counter > number_items
			loop
				threshold := gen.rchoose (1, 100) -- each iteration, generate a new value to compare against the threshold values provided by `test` or `play`


				if threshold < shared_info.planet_threshold then
					create component.make('P', shared_info.planet_id)
					shared_info.planet_increment --make movable go up for next planet creation
					component.set_location ([row, column])
				end


				if attached component as entity then
					put (entity) -- add new entity to the contents list

					--@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
					turn:=gen.rchoose (0, 2) -- Hint: Use this number for assigning turn values to the planet created
					-- The turn value of the planet created (except explorer) suggests the number of turns left before it can move.
					--@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
					entity.set_turns (turn)
					component := void -- reset component object
				end

				loop_counter := loop_counter + 1
			end
		end

--	remove(component: ENTITY_ALPHABET) --obsolete
--			--remove an entity object
----		require
----				has_item_to_delete: contents.has (component)
--		local
--			deleted:  BOOLEAN
--			i: INTEGER
--		do
--			from
--				i := contents.lower
--				deleted := false
--			until
--				i > contents.upper or deleted
--			loop
--				if contents[i].item ~ component.item then
--					contents.go_i_th (i)
--					contents.remove
--					deleted := true
--				end
--				i := i + 1
--			end
--		end

	remove_by_id(id: INTEGER)
			--remove an entity by id
		require
			id_exists: across contents is entity some entity.id ~ id end
		local
			removed: BOOLEAN
		do
			from
				contents.start
				removed := false
			until
				contents.after or removed
			loop
				if contents.item.id ~ id then --if same id
					contents.item.set_sector_place (0) --set 0 meaning not in any location
					contents.remove
					removed := true
				else
					contents.forth
				end

			end
		ensure
			one_less: contents.count ~ old contents.count - 1
			item_removed: not across contents is entity some entity.id = id end
		end

	place (component: ENTITY_ALPHABET)
			--add the component in first avaliable spot
		require
			not_full: contents.count < 4
		local
			occupied_locations: ARRAYED_LIST [INTEGER]
			i: INTEGER
			placed: BOOLEAN
		do
			create occupied_locations.make (0)

			across contents is entity loop --find all the occupied locations
				occupied_locations.force(entity.sector_place)
			end

			--put in first avaliable spot
			from
				i := 1
				placed := false
			until
				placed or i > 4
			loop
				if not occupied_locations.has (i) then --location not occupied
					component.set_sector_place (i)
					contents.extend (component)
					placed := true
				end
				i := i + 1
			end

			--change location
			if component.item ~ 'E' then
				check attached {ENTITY_EXPLORER} component as exp then
					exp.set_explorer_location ([row, column])
				end
			else --if planet
				check attached {ENTITY_MOVABLE} component as planet then
					planet.set_location ([row, column])
				end
			end



		end

feature {GALAXY} --command

	put (new_component: ENTITY_ALPHABET)
			-- put `new_component' in contents array
		local
			loop_counter: INTEGER
			found: BOOLEAN
			occupied_locations: ARRAYED_LIST [INTEGER]
			placed: BOOLEAN
			i: INTEGER
		do
			from
				loop_counter := 1
			until
				loop_counter > contents.count or found
			loop
				if contents [loop_counter] = new_component then
					found := TRUE
				end --if
				loop_counter := loop_counter + 1
			end -- loop

			if not found and not is_full then
				create occupied_locations.make (0)
				across contents is entity loop --store spots taken already
					occupied_locations.force (entity.sector_place)
				end

				--find first empty spot
				from
					placed := false
					i:= 1
				until
					placed or i > 4
				loop
					if not occupied_locations.has (i) then
						new_component.set_sector_place (i)
						placed := true
					end
					i := i + 1
				end
				contents.extend (new_component)
			end

		ensure
			component_put: not is_full implies contents.has (new_component)
		end

feature -- Queries

	print_sector: STRING
			-- Printable version of location's coordinates with different formatting
		do
			Result := ""
			Result.append (row.out)
			Result.append (":")
			Result.append (column.out)
		end

	is_full: BOOLEAN
			-- Is the location currently full?
		local
			loop_counter: INTEGER
			occupant: ENTITY_ALPHABET
			empty_space_found: BOOLEAN
		do
			if contents.count < shared_info.max_capacity then
				empty_space_found := TRUE
			end
			from
				loop_counter := 1
			until
				loop_counter > contents.count or empty_space_found
			loop
				occupant := contents [loop_counter]
				if not attached occupant  then
					empty_space_found := TRUE
				end
				loop_counter := loop_counter + 1
			end

			if contents.count = shared_info.max_capacity and then not empty_space_found then
				Result := TRUE
			else
				Result := FALSE
			end
		end

	has_stationary: BOOLEAN
			-- returns whether the location contains any stationary item
		local
			loop_counter: INTEGER
		do
			from
				loop_counter := 1
			until
				loop_counter > contents.count or Result
			loop
				if attached contents [loop_counter] as temp_item  then
					Result := temp_item.is_stationary
				end -- if
				loop_counter := loop_counter + 1
			end
		end

	has_entity(e: CHARACTER): BOOLEAN
			--does this sector contain a entity type
		do
			Result := across contents is entity some entity.item ~ e  end --some entity e exists in contents
		end

	has_star : BOOLEAN
			--does this sector have * or Y
		do
			Result := has_entity('*') or has_entity('Y')
		end

	index_entity_id (id: INTEGER): INTEGER
			--returns location of that id
		require
			id_exists: across contents is entity some entity.id = id  end
		do
			across 1 |..| contents.count is i loop
				if contents[i].id = id then
					Result := i
				end
			end
		end

	entity_at_place (n: INTEGER): CHARACTER
			--return the character at that place and returns '-' if no character is there
		do
			Result := '-'

			across contents is entity loop
				if entity.sector_place = n then
					Result := entity.item --return character at that place
				end
			end
		end

	entity_at_place_out (n: INTEGER) : STRING
			--returns entity as [id,character] if there is an entity at that spot, otherwise return '-'
		do
			Result := "-"
			across contents is entity loop
				if entity.sector_place = n then
					Result := entity.out
				end
			end
		end
end

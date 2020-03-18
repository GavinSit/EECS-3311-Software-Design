note
	description: "A default business model. This model will check for erroneous input as well"
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_SIMODYSSEY

inherit
	ANY
		redefine
			out
		end

create {ETF_SIMODYSSEY_ACCESS}
	make

feature {NONE} -- Initialization
	make
			-- Initialization for `Current'.
		local
			sia: SHARED_INFORMATION_ACCESS --access shared info
			sua: STRING_UPDATE_ACCESS --access shared string update
			ca: CONTROLLER_ACCESS
		do
			su := sua.string_update
			info := sia.shared_info
			c := ca.controller

			create ec.make --make error checker
			create msg.make_empty --empty string to store message
			create board.make_empty

			just_msg := false --display just the message
		end

feature --simodyssey attributes
	info: SHARED_INFORMATION
	su: STRING_UPDATE --updates states and provide error messages to print if needed
	ec: ERROR_CHECKER --checks for errors
	c: CONTROLLER --controls the game
	board: STRING --stores the game board
	msg: STRING --message at the end after state and game board
	just_msg: BOOLEAN --just show the message and not the board
	won: BOOLEAN --game is won
	finished_game: BOOLEAN --game is finished (devoured by blackhole or ran outta fuel)

feature -- model operations
	reset
			-- Reset model state.
		do
			make
		end

	abort
		do
			su.second_increment --update the string
			if ec.valid_in_game then --if in game, then can abort	
				c.end_game --ends the game

				msg := su.msg_abort
			else --if not in game, cannot abort
				set_valid_selection (false)
				msg := su.msg_not_in_mission
			end
		end

	land
		do
			if ec.valid_in_game then --if in game
				if ec.valid_land and ec.valid_unvisited then --if landing is possible and there is unvisited planet
					su.first_increment
					su.reset_second
					c.land

					check attached {ENTITY_MOVABLE}c.entities_index_of (c.get_explorer.get_land_location) as planet then
						if planet.get_support_life then --if support life
							msg := su.msg_found_life
							won := true --game is won
--							c.set_ingame (false)
--							c.end_game
						else
							msg := su.msg_no_life (c.get_explorer.location_out)
						end
					end
				else --if landing not possible
					su.second_increment
					set_valid_selection (false)
					if c.get_explorer.get_landed then --if landed already
						msg := su.msg_already_landed (c.get_explorer.location_out)
					elseif not c.has_yellow_dwarf then --if no yellow dwarf, then cannot land even if there is planet
						msg := su.msg_no_yellow_dwarf (c.get_explorer.location_out)
					elseif not c.has_planet then --has yellow dwarf but no planet
						msg := su.msg_no_planet_to_land (c.get_explorer.location_out)
					else
						msg := su.msg_no_unvisited_planet (c.get_explorer.location_out)
					end
					just_msg := true
				end

			else --if not in game
				su.second_increment
				set_valid_selection (false)
				msg := su.msg_not_in_mission
			end
		end

	lift_off
		do
			if ec.valid_in_game then --if in game
				if c.get_explorer.get_landed then --if landed, then liftoff possible
					su.first_increment
					su.reset_second

					c.liftoff

					msg := su.msg_lift_off (c.get_explorer.location_out)
				else --if not on a planet
					su.second_increment
					set_valid_selection (false)

					msg := su.msg_not_on_planet (c.get_explorer.location_out)
					just_msg := true
				end
			else --not in game
				su.second_increment
				set_valid_selection (false)
				msg := su.msg_not_in_mission
			end
		end

	move (dir: INTEGER_32)
		local
			new_loc: TUPLE [row: INTEGER; col: INTEGER]
			sector: ARRAYED_LIST [ENTITY_ALPHABET]
		do
			if ec.valid_in_game then --if in game
				if ec.valid_move(dir) then --if in game and not landed then move is valid
					su.first_increment
					su.reset_second

					c.move (dir)
					new_loc := c.get_explorer.get_location --new location of explorer after moving


					if c.get_explorer.get_fuel = 0 then --out of fuel
						finished_game := true
						msg := su.msg_out_of_fuel (c.get_explorer.location_out) + "%N" + su.msg_game_over

					elseif c.in_blackhole then --if in blackhole
						finished_game := true
						msg := su.msg_blackhole + "%N" + su.msg_game_over

					elseif c.game_board_array[new_loc.row, new_loc.col].has_entity ('*') or c.game_board_array[new_loc.row, new_loc.col].has_entity ('Y') then --in area with blue giant, then add fuel
						sector := c.game_board_array[new_loc.row, new_loc.col].contents --sector to check
						from
							sector.start
						until
							sector.after
						loop
							if sector.item.item ~ '*' or sector.item.item ~ 'Y' then --if one of the following stars, then add corresponding fuel
								check attached {ENTITY_STAR} sector.item as star then
									c.get_explorer.add_fuel (star.get_luminosity)
								end
								sector.finish --move cursor to end
							end
							sector.forth
						end
					end

				else --if invalid move
					su.second_increment
					set_valid_selection (false)
					just_msg := true
					if not c.get_explorer.get_landed and c.get_ingame then --if not landed and in game; could also use is_full from sector class
						msg := su.msg_cannot_move_area_full
					elseif c.get_explorer.get_landed then --if landed
						msg := su.msg_currently_landed (c.get_explorer.location_out)
					end
				end
			else --not in game
				su.second_increment
				set_valid_selection (false)
				msg := su.msg_not_in_mission
			end
		end

	pass
		do
			if ec.valid_in_game then --if in game,
				su.first_increment
				su.reset_second
				c.pass
			else --if not in game
				su.second_increment
				set_valid_selection (false)
				msg := su.msg_not_in_mission
			end
		end

	play
		do
			if ec.valid_start_game then --start game if not already in game
				su.first_increment
				su.reset_second

				info.set_planet_threshold (30) --sets standard threshold for game
				c.new_game ("play") --starts a new game
			else --already in game
				su.second_increment
				set_valid_selection (false)

				msg := su.msg_already_in_game
			end
		end

	status
		local
			loc: TUPLE [row: INTEGER; col: INTEGER] --location of explorer
		do
			su.second_increment --increments regardless of valid or not

			if ec.valid_in_game then --can only check status if in game
				loc := c.get_explorer.get_location
				msg := su.msg_status_update(c.get_explorer.location_with_spot, c.get_explorer.get_fuel , c.get_explorer.get_life, c.get_explorer.get_landed)
				just_msg := true
			else --if update not work, then not in game
				set_valid_selection (false)
				set_valid_selection (false)
				msg := su.msg_not_in_mission
			end
		end

	test (p_threshold : INTEGER_32)
		do
			if ec.valid_start_game then
				su.first_increment
				su.reset_second

				info.set_planet_threshold (p_threshold)
				c.new_game ("test") --start a new game
			else --if already in game
				su.second_increment
				set_valid_selection (false)

				msg := su.msg_already_in_game
				just_msg := true
			end
		end

	wormhole
		do
			if ec.valid_in_game then --if in game
				if ec.valid_wormhole then --if there is wormhole
					su.first_increment
					su.reset_second

					c.enter_wormhole

					if c.in_blackhole then --teleported to blackhole
						finished_game := true
						msg := su.msg_blackhole + "%N" + su.msg_game_over
					end
				else --no wormhole
					su.second_increment
					set_valid_selection (false)
					msg := su.msg_no_wormhole (c.get_explorer.location_out)
				end
			else --not in game
				su.second_increment
				set_valid_selection (false)
				msg := su.msg_not_in_mission
			end
		end

feature -- queries
	out : STRING
		do
			create Result.make_empty

			Result.append(su.update (c.get_ingame)) --shows the state

			if won then --if game is finished, then set ingame false
				c.end_game
			end

			if not (su.get_first = 0 and su.get_second = 0) then --if not the first time running
				--update status bar; update function will check in game or not
				if not msg.is_empty then --if error message not empty, then there is message to output
					Result.append (msg)
				end

				if c.get_ingame and not just_msg then --if in game and dont display just a message
					if not msg.is_empty then --add a space if there is message
						Result.append ("%N")
					end
					Result.append ("  Movement:")
					Result.append (c.get_movement_as_string)

					if su.get_mode ~ "test" then --if in test mode
						Result.append ("%N")
						--Sectors and corresponding entities
						Result.append ("  Sectors:%N")
						Result.append (c.sectors_update)

						--Description of all entities
						Result.append ("  Descriptions:%N")
						Result.append (c.entities_description)

						--Deaths this turn
						Result.append ("  Deaths This Turn:")
						Result.append (c.get_deaths_as_string)
					end
					Result.append (c.game_board) --print game board

					if su.get_mode ~ "test" and msg ~ (su.msg_out_of_fuel (c.get_explorer.location_out) + "%N" + su.msg_game_over) then --if test mode and explorer out of fuel
						Result.append ("%N")
						Result.append (msg)
					end
				end
			elseif su.get_first = 0 and su.get_second = 0 then
				 --first time running
				Result.append(su.msg_first_run) --show the first run message
			end

			if finished_game then
				c.end_game
			end

			--reset parameters
			just_msg := false
			msg.wipe_out --clear msg
			set_valid_selection (true) --reset to valid
			won := false
			finished_game := false
			c.reset_movements
			c.reset_deaths --reset the array holding deaths this round
		end

feature --commands
	set_valid_selection (b: BOOLEAN)
			--su.set_valid (b)
		do
			su.set_valid (b)
		end


end

note
	description: "Checks if input is valid. Return if input is valid (true) or invalid (false)"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ERROR_CHECKER

create
	make

feature  -- Initialization

	make
			-- Initialization for `Current'.
		local
			sua: STRING_UPDATE_ACCESS
			ca: CONTROLLER_ACCESS
			sia: SHARED_INFORMATION_ACCESS
		do
			su := sua.string_update --so that all classes have the same string_update
			c := ca.controller
			info := sia.shared_info
		end

feature {NONE} --attributes
	su: STRING_UPDATE
	c: CONTROLLER
	du: DIRECTION_UTILITY
	info: SHARED_INFORMATION

feature --check errors
	valid_start_game : BOOLEAN
			--can only start if not in game
		do
			Result := not c.get_ingame --start game only if not in game already
		end

	valid_move (dir: INTEGER_32) : BOOLEAN
			--can only move if in game and not landed on planet and not full
		local
			loc, new_loc: TUPLE [row: INTEGER; col: INTEGER]
		do
--			create loc.default_create
			loc := c.get_explorer.get_location
--			create new_loc.default_create
			new_loc := c.get_potential_location (loc, dir) --get the potential location
			Result := c.get_ingame and not c.get_explorer.get_landed and not c.game_board_array[new_loc.row, new_loc.col].is_full
		end

	valid_abort : BOOLEAN
			--can abort if in game
		do
			Result := c.get_ingame
		end

	valid_in_game : BOOLEAN
			--checks if in game
		do
			Result := c.get_ingame
		end

	valid_wormhole : BOOLEAN
			--valid only if there is a wormhole in that sector
		local
			loc: TUPLE [row: INTEGER; col: INTEGER] --explorer location
		do
			loc := c.get_explorer.get_location
			Result := c.game_board_array[loc.row, loc.col].has_entity ('W')
		end

	valid_land : BOOLEAN
			--can land if there is yellow dwarf and planet and isnt already landed
		do
			Result := c.has_planet and c.has_yellow_dwarf and not c.get_explorer.get_landed --todo and unvisited planet
		end

	valid_unvisited : BOOLEAN
			--check that there is an unvisited planet in that sector
			--NOTE: will return false if there is no planet in sector
		local
			loc: TUPLE [row: INTEGER; col: INTEGER]
			section: ARRAYED_LIST [ENTITY_ALPHABET]
		do
			loc := c.get_explorer.get_location
			section := c.game_board_array[loc.row, loc.col].contents --store the array to check
			Result := false
			across section is entity loop
				if entity.item ~ 'P' then --if it is a planet
					check attached {ENTITY_MOVABLE} entity as planet then --cast and check if planet
						Result := not planet.get_visited
					end --end check
				end
			end --end across
		end

	valid_lift_off : BOOLEAN
			--can liftoff if landed
		do
			Result := c.get_explorer.get_landed and c.get_ingame
		end
end

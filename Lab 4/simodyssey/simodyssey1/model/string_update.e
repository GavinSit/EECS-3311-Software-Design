note
	description: "Tool to update state bar whether in game or not"
	author: "Gavin Sit"
	date: "$Date$"
	revision: "$Revision$"

class
	STRING_UPDATE

inherit
	MESSAGE

create
	make

feature --constructor
	make
		do
			state1 := 0
			state2 := 0

			set_mode ("") --todo
			valid := "ok"

			create s.make_empty
		end

feature {NONE} --attributes
	s: STRING --string storing the state updates
	state1: INTEGER
	state2: INTEGER
	mode: STRING
	ingame: BOOLEAN
	valid: STRING --checks if input is valid and provides response 'ok' or 'error'

feature --queries
	get_mode : STRING
			--return game mode
		do
			Result := mode
		end

	get_first : INTEGER
			--return first state
		do
			Result := state1
		end

	get_second : INTEGER
			--return second state
		do
			Result := state2
		end

	get_valid_string : STRING
			--is input valid
		do
			Result := valid
		end

	update(game_running: BOOLEAN): STRING
			--update status bar
			--Note: does not output game board too
		do
			create Result.make_from_string ("  state:" + get_first.out + "." + get_second.out + ", ")

			if game_running then --if in game, then update status bar with mode
				Result.append ("mode:" + get_mode + ", ") --extra thing to add if in game
			end

			Result.append (get_valid_string + "%N") --either 'ok' or 'error'
		end

feature --command
	is_ingame (b: BOOLEAN)
			--in game or not change status
		do
			ingame := b
		end
	set_mode (m: STRING)
			--set which game mode it is
		require
			correct_input: m ~ "play" or m ~ "test" or m ~ ""
		do
			mode := m
		end

	set_valid (bool: BOOLEAN)
			--set ok or error of state
		do
			if bool then
				valid := "ok"
			else
				valid := "error"
			end
		end

	first_increment
			--increment state by one
		do
			state1 := state1 + 1
		end

	second_increment
			--increment by 1
		do
			state2 := state2 + 1
		end

	reset_second
			--reset second to 0
		do
			state2 := 0
		end
end

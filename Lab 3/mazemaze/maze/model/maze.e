note
	description: "A default business model."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	MAZE

inherit
	ANY
		redefine
			out
		end

create {MAZE_ACCESS}
	make

feature {NONE} -- Initialization
	make
			-- Initialization for 'Current'.
		do
			create s.make_empty
			i := 0
			score := 0
			totalScore := 0
			level := 0
			inGame := false
			create maze_generator.make
			create maze_drawer.make (maze_generator.generate_new_maze (1))--generates a maze of level 1
			errormsg := ""
		end

feature {NONE}-- model attributes
	s : STRING
	i : INTEGER
	score: INTEGER --store user score
	totalScore: INTEGER --store total possible score
	level: INTEGER--number of points to add if maze is solved
	inGame: BOOLEAN --checks if in game
	errormsg: STRING

feature {NONE} --maze attributes
	maze_generator: MAZE_GENERATOR --generates maze
	maze_drawer: MAZE_DRAWER --make the maze

feature -- model operations
	default_update
			-- Perform update to the model state.
		do
			i := i + 1
		end

	reset
			-- Reset model state.
		do
			make
		end

	set_error(m: STRING)
		--pass an errror message
		do
			errormsg := m
		end

	get_error : STRING
		do
			Result := errormsg
		end

	clear_error
		do
			errormsg.wipe_out
		end

feature --maze operations
	new_game (a_level: INTEGER_32)

		do

			if inGame then --if already in a game
				set_error("Already in game!%N")
			else
--				s.append ("->new_game(" + a_level.out + ")%N")
				i := i + 1
				inGame := true
				set_solve_requested(false)
				totalScore := totalScore + a_level --total possible score
				level := a_level
				s.wipe_out --clear string

				--todo
				--create new maze
				create maze_drawer.make (maze_generator.generate_new_maze (a_level))
				maze_drawer.init_player
			end

		end

	move (a_direction: INTEGER_32)
		local
			next_coord: COORDINATE
			row: INTEGER_32
			col: INTEGER_32
			coord_item: STRING --store item at next_coord
		do
			s.wipe_out
--			s.append ("->move(" + a_direction.out + ")%N")
			i := i + 1
			if inGame then --move if in game
				--check direction
				if a_direction = 4 then --N
					row := -1
					col := 0
				elseif a_direction = 5 then --E
					row := 0
					col := 1
				elseif a_direction = 6 then --S
					row := 1
					col := 0
				else --W
					row := 0
					col := -1
				end

				--create coord to check if vaid
				create next_coord.make ([maze_drawer.player_coord.row + row, maze_drawer.player_coord.col + col])
				coord_item := maze_drawer.maze_ascii.item (next_coord.row, next_coord.col) --

				--check if new location is valid and not breaking walls
				if maze_drawer.is_valid_coordinate (next_coord)
				and  not (coord_item ~ "|   ") and not (coord_item ~ "+---") then --check if valid and there is no wall
					maze_drawer.move_player ([row, col]) --move direction specified above
				else --invalid coord
					Current.set_error ("Error! Not a valid move.")
				end

			else --not in game so pass error
				Current.set_error ("Error! Not in a game.")
			end
		end

	abort
		do
			s.wipe_out
--			s.append ("->abort%N")
			i := i + 1
			inGame := false --reset parameters after finishing
			level := 0
			set_solve_requested(false)

			--check if solvable
		end

	solve
		do
			s.wipe_out
--			s.append ("->solve%N")
			i := i + 1

			--check if solvable
			set_solve_requested(true)
--			find_shortest_path
			--if unsolvable

		end

feature {NONE} -- solve maze queries
	solvemaze: BOOLEAN

	solve_requested : BOOLEAN
		--solve maze has been requested
		do
			Result := solvemaze
		end
	set_solve_requested(b:BOOLEAN)
		do
			solvemaze := b
		end

	find_shortest_path
		local
			shortest_path: ARRAY [VERTEX [COORDINATE]] --shortest path from finish to current location
			current_spot, finish: VERTEX [COORDINATE] --spot to search from
			mg: LIST_GRAPH [COORDINATE]
			str: STRING
		do
			str := " o "
			mg := maze_drawer.maze_graph
			current_spot := mg.vertex_of (maze_drawer.player_coord) --current spot of player as a vertex
			finish := mg.vertex_of ([maze_drawer.size*2, maze_drawer.size]) --vertex of the finish spot
			shortest_path := mg.shortest_path (current_spot, finish) --shortest path as array

			--output it to the string
			across shortest_path is vertex loop --repace it with "o"
				if not maze_drawer.maze_ascii[vertex.item.row, vertex.item.col].has (maze_drawer.player_char) then --if not has '*' already, then draw solution character there
					maze_drawer.maze_ascii[vertex.item.row, vertex.item.col] := str --replace with solution character
				end
			end
		end

feature -- queries
	out : STRING
		do
			create Result.make_from_string (s)
			Result.append ("  State: " + i.out)
			Result.append (" -> ") --todo change for check

			if not errormsg.is_empty then --if not empty
				Result.append (errormsg)
				clear_error --empty error message to be used again
			else --if no error then continue
				Result.append ("ok") --status ok

				if inGame then --if already in game
					Result.append (maze_drawer.out) --print maze
					Result.append ("%N")

					--check if finished maze
					if maze_drawer.player_coord.row ~ ((maze_drawer.size * 2)+1) and maze_drawer.player_coord.col ~ maze_drawer.size then --if finished
						Result.append ("  Congratulations! You escaped the maze!%N")
						score := score + level
						--reset parameters after finishing
						inGame := false
						level := 0
					end
					if solve_requested then --in game and wanted to solve but solvable
						Result.append ("  Since you used the solution, no points are awarded.%N")
					end
					Result.append ("  Game Number: " + totalScore.out + "%N")
					Result.append ("  Score: " + score.out + "/" + totalScore.out)
				end
			end
			Result.append ("%N"); --new line for next input
		end

end





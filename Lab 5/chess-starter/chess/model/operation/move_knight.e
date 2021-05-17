note
	description: "Summary description for {MOVE_KNIGHT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MOVE_KNIGHT

inherit

	MOVE
		redefine
			out
		end

	DEBUG_OUTPUT
		redefine
			out
		end

create
	make,
	make_new_old

feature {NONE} -- constructor

	make(a_new_position: SQUARE)
		do
			old_position := board.knight_position
			position := a_new_position
		end

	make_new_old (a_new_position, a_old_position: SQUARE)
		do
			old_position := a_old_position
			position := a_new_position
		end

feature -- queries
		old_position: SQUARE
		position: SQUARE

	directions: ARRAY[TUPLE[x: INTEGER; y: INTEGER]]
		do
			Result := <<[2, 1], [2, -1], [1, 2], [-1, 2], [-2, 1], [-2, -1], [1, -2], [-1, -2]>>
		end

feature -- commands

	execute
		do
				board.move_knight (position)
		end

	undo
		do
				board.move_knight (old_position)
		end

	redo
		do
--			board.history.forth
			execute
		end

feature

	out: STRING
		do
			Result := ""
		end

	debug_output: STRING
		do
			Result := out
		end

end

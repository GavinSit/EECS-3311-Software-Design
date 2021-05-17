note
	description: "A default business model."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MODEL

inherit
	ANY
		redefine
			out
		end

create {ETF_MODEL_ACCESS}
	make

feature {NONE} -- Initialization
	make
			-- Initialization for `Current'.
		do
			message := "ok, K = King and N = Knight"
			make_board (5) -- minimum size
		end

feature -- board
	board: BOARD

    make_board(a_size:INTEGER)
    	require
    		5 <= a_size and a_size <= 8
    	do
    		create board.make (a_size)
    	end

feature -- message
	message: STRING

	set_message(a_message: STRING)
		do
			message := a_message
		end

feature -- model operations
	reset
			-- Reset model state.
		do
			make
		end

feature -- queries
	out : STRING
		do
			create Result.make_from_string ("  " + message + ":")
			if message ~ "ok" and board.started then
				Result.append ("%N")
				Result.append (board.out)
			end
		end

end





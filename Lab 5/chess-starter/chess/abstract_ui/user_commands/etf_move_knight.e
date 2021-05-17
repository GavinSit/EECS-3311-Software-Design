note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MOVE_KNIGHT
inherit
	ETF_MOVE_KNIGHT_INTERFACE
create
	make
feature -- command
	move_knight(square: TUPLE[x: INTEGER_32; y: INTEGER_32])
		require else
			move_knight_precond(square)
		local
    		new_square: SQUARE
    		move: MOVE_KNIGHT
    	do
    		create new_square.make (square.x, square.y)
    		create move.make (new_square)

    		if model.board.started and move.moves (move.old_position.x, move.old_position.y).has (new_square) then
--				model.board.history.extend_history (create {MOVE_KNIGHT}.make (new_square))
				model.board.history.extend_history ("knight", move.position, move.old_position)
				model.board.move_knight (new_square)
				model.set_message ("ok")
    		else
    			model.set_message ("invalid move")
    		end
			etf_cmd_container.on_change.notify ([Current])
    	end

end

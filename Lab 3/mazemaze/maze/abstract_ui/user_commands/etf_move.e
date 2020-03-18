note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MOVE
inherit
	ETF_MOVE_INTERFACE
create
	make
feature -- command
	move(a_direction: INTEGER_32)
		-- move in the stated directions when the exit is reached, a
		-- message saying "You've escaped the maze! Well done."
	    -- score: number of games won/games played
		require else
			move_precond(a_direction)
    	do
			-- perform some update on the model state
--			model.default_update
			model.move(a_direction)
			etf_cmd_container.on_change.notify ([Current])
    	end

end

note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_NEW_GAME
inherit
	ETF_NEW_GAME_INTERFACE
create
	make
feature -- command
	new_game(a_level: INTEGER_32)
		-- sets up the player at the entrance entrance is left top
	    -- exit is right bottom the goal is for the player to escape
	    -- out of the maze at movethe exit
		require else
			new_game_precond(a_level)
    	do
			-- perform some update on the model state
--			model.default_update

			model.new_game (a_level)

			etf_cmd_container.on_change.notify ([Current])
    	end

end

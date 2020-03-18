note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_SOLVE
inherit
	ETF_SOLVE_INTERFACE
create
	make
feature -- command
	solve
		-- shows a shortest path to the exit if it exists from the
		--current position counts as a game lost if solvable
    	do
			-- perform some update on the model state
--			model.default_update
			model.solve
			etf_cmd_container.on_change.notify ([Current])
    	end

end

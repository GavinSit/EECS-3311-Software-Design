note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ABORT
inherit
	ETF_ABORT_INTERFACE
create
	make
feature -- command
	abort
		-- counts as game lost if solvable
    	do
			-- perform some update on the model state
--			model.default_update
			model.abort
			etf_cmd_container.on_change.notify ([Current])
    	end

end

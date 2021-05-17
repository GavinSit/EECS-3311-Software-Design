note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_REDO
inherit
	ETF_REDO_INTERFACE
create
	make
feature -- command
	redo
    	do
    		if model.board.history.before then
    			model.board.history.forth
    			model.board.history.clear_call
    		end

			if model.board.history.on_item then
				if model.board.history.prev_call ~ "undo" then --if previous command was undo, then need to move one more step
					model.board.history.forth
				end
				model.board.history.item.redo
				model.board.history.forth
				model.board.history.set_call ("redo")

				model.set_message ("ok")
			else
				model.set_message ("nothing to redo")
			end

			etf_cmd_container.on_change.notify ([Current])
    	end

end

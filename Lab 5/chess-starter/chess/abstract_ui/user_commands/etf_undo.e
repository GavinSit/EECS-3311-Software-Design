note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_UNDO
inherit
	ETF_UNDO_INTERFACE
create
	make
feature -- command
	undo
    	do
			if model.board.history.after then
				model.board.history.back
				model.board.history.clear_call
			end

			if model.board.history.on_item then
				if model.board.history.prev_call ~ "redo" then
					model.board.history.back --move back one more spot
				end
				model.board.history.item.undo
				model.board.history.back
				model.board.history.set_call ("undo")

				model.set_message ("ok")
			else
				model.set_message ("no more to undo")
			end

			etf_cmd_container.on_change.notify ([Current])
    	end

end

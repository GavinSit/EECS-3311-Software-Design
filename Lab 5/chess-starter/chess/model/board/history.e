note
	description: "History operations for undo/redo design pattern"
	author: "JSO"
	date: "$Date$"
	revision: "$Revision$"

class
	HISTORY

create
	make

feature{NONE} -- create
	make
		do
			prev_call := ""
			create {ARRAYED_LIST [TUPLE [STRING, SQUARE, SQUARE]]} history.make (10)
		end

		-- a history list of user invoked operations
		-- implementation
	history: LIST [TUPLE [type: STRING; old_location, current_location: SQUARE]]

feature -- queries
	prev_call: STRING --what was the previous call to history? (undo/redo)

	item: MOVE
			-- Cursor points to this user operation
		require
			on_item
		do

			if history.item.type ~ "king" then
				Result := create {MOVE_KING}.make_new_old (history.item.old_location, history.item.current_location)
			else
				Result := create {MOVE_KNIGHT}.make_new_old (history.item.old_location, history.item.current_location)
			end
		end

	on_item: BOOLEAN
			-- cursor points to a valid operation
			-- cursor is not before or after
		do
			Result := not history.before and not history.after
		end


	after: BOOLEAN
			-- Is there no valid cursor position to the right of cursor?
		do
			Result := history.index = history.count + 1
		end

	before: BOOLEAN
			-- Is there no valid cursor position to the left of cursor?
		do
			Result := history.index = 0
		end

feature -- comands
	extend_history (type: STRING; old_location, location: SQUARE)
			-- remove all operations to the right of the current
			-- cursor in history, then extend with `a_op'
		do
			clear_call --clear the string keeping previous command
			remove_right
			history.extend ([type, old_location, location])

			history.finish
		ensure
			history[history.count] ~ [type, old_location, location]
		end

	remove_right
			--remove all elements
			-- to the right of the current cursor in history
		do
			if not history.islast and not history.after then
				from
					history.forth
				until
					history.after
				loop
					history.remove
				end
			end
		end

	forth
		require
			not after
		do
			history.forth
		end

	back
		require
			not before
		do
			history.back
		end

	set_call(c: STRING)
		require
			c ~ "undo" or c ~ "redo"
		do
			prev_call := c
		end

	clear_call
		do
			prev_call.wipe_out
		end
invariant
	prev_call ~ "undo" or prev_call ~ "redo" or prev_call ~ ""
end

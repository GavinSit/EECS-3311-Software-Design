note
	description: "Galaxy represents a game board in simodyssey."
	author: "Kevin B"
	date: "$Date$"
	revision: "$Revision$"

class
	GALAXY

inherit ANY
	redefine
		out
	end

create
	make

feature -- attributes

	grid: ARRAY2 [SECTOR]
			-- the board

	gen: RANDOM_GENERATOR_ACCESS

	shared_info_access : SHARED_INFORMATION_ACCESS

	shared_info: SHARED_INFORMATION
		attribute
			Result:= shared_info_access.shared_info
		end

feature --constructor
	make
		do
			create grid.make_filled (create {SECTOR}.make_dummy, shared_info.number_rows, shared_info.number_columns)
		end

feature --command - make the galaxy
	make_galaxy
		-- creates a dummy of galaxy grid
		local
			row : INTEGER
			column : INTEGER
		do
			create grid.make_filled (create {SECTOR}.make_dummy, shared_info.number_rows, shared_info.number_columns)
			from
				row := 1
			until
				row > shared_info.number_rows
			loop

				from
					column := 1
				until
					column > shared_info.number_columns
				loop
					grid[row,column] := create {SECTOR}.make(row,column,create{ENTITY_EXPLORER}.make ('E', 0))
					column:= column + 1;
				end
				row := row + 1
			end
			set_stationary_items
	end

feature --commands

	set_stationary_items
			-- distribute stationary items amongst the sectors in the grid.
			-- There can be only one stationary item in a sector
		local
			loop_counter: INTEGER
			check_sector: SECTOR
			temp_row: INTEGER
			temp_column: INTEGER
		do
			from
				loop_counter := 1
			until
				loop_counter > shared_info.number_of_stationary_items
			loop

				temp_row :=  gen.rchoose (1, shared_info.number_rows)
				temp_column := gen.rchoose (1, shared_info.number_columns)
				check_sector := grid[temp_row,temp_column]
				if (not check_sector.has_stationary) and (not check_sector.is_full) then

					grid[temp_row,temp_column].put (create_stationary_item(shared_info.stationary_id))
					loop_counter := loop_counter + 1
					shared_info.stationary_increment
				end -- if
			end -- loop
		end -- feature set_stationary_items

	create_stationary_item (id: INTEGER): ENTITY_ALPHABET
			-- this feature randomly creates one of the possible types of stationary actors
		require
			valid_neg_id: id < -1
		local
			chance: INTEGER
		do
			chance := gen.rchoose (1, 3)
			inspect chance
			when 1 then
				create {ENTITY_STAR}Result.make('Y', id)
			when 2 then
				create {ENTITY_STAR}Result.make('*', id)
			when 3 then
				create Result.make('W', id)
			else
				create {ENTITY_STAR}Result.make('Y', id) -- create more yellow dwarfs this will never happen, but create by default
			end -- inspect
		end

feature -- query
	out: STRING
	--Returns the grid in string form
	local
		string1, string2: STRING
		temp_sector: SECTOR
	do
		create Result.make_empty
		create string1.make (7*shared_info.number_rows)
		create string2.make (7*shared_info.number_columns)

		string1.append ("%N")

		across 1 |..| shared_info.number_rows is row loop --rows
			string1.append ("    ")
			string2.append ("    ")
			across 1 |..| shared_info.number_columns is col loop --cols
				temp_sector := grid [row, col]
				string1.append ("(" + temp_sector.print_sector + ")  ") --print the sector

				across 1 |..| shared_info.max_capacity is i loop --print the locations
					string2.append_character (temp_sector.entity_at_place (i))
				end
				string2.append ("   ") --places

			end --end col
--			string1 := string1.substring (1, string1.count-2) --delete extra spaces
--			string2 := string2.substring (1, string2.count-3)
			string1.append ("%N")
			if not (row = shared_info.number_rows) then --if not the last row
				string2.append ("%N")
			end

			Result.append (string1)
			Result.append (string2)

			--clear string to reuse
			string1.wipe_out
			string2.wipe_out
		end --end row
	end

--	out: STRING --obsolete
--	--Returns grid in string form
--	local
--		string1: STRING
--		string2: STRING
--		row_counter: INTEGER
--		column_counter: INTEGER
--		contents_counter: INTEGER
--		temp_sector: SECTOR
--		temp_component: ENTITY_ALPHABET
--		printed_symbols_counter: INTEGER
--	do
--		create Result.make_empty
--		create string1.make(7*shared_info.number_rows)
--		create string2.make(7*shared_info.number_columns)
--		string1.append("%N")

--		from
--			row_counter := 1
--		until
--			row_counter > shared_info.number_rows
--		loop --rows
--			string1.append("    ")
--			string2.append("    ")

--			from
--				column_counter := 1
--			until
--				column_counter > shared_info.number_columns
--			loop --columns
--				temp_sector:= grid[row_counter, column_counter] --sector at [row, col]
--			    string1.append("(")
--            	string1.append(temp_sector.print_sector)
--                string1.append(")")
--			    string1.append("  ")

--			    --printing all the stuff in contents array
--				from
--					contents_counter := 1
--					printed_symbols_counter:=0
--				until
--					contents_counter > temp_sector.contents.count
--				loop
--					temp_component := temp_sector.contents[contents_counter]
--					if attached temp_component as character then --if content exists at that index, then print item
--						string2.append_character(character.item)
--					else --print '-'
--						string2.append("-")
--					end -- if
--					printed_symbols_counter:=printed_symbols_counter+1
--					contents_counter := contents_counter + 1
--				end -- loop

--				--print spaces for after all the stuff is printed
--				from
--				until (shared_info.max_capacity - printed_symbols_counter)=0
--				loop
--						string2.append("-")
--						printed_symbols_counter:=printed_symbols_counter+1

--				end
--				string2.append("   ")
--				column_counter := column_counter + 1
--			end -- loop
--			string1.append("%N")
--			if not (row_counter = shared_info.number_rows) then
--				string2.append("%N")
--			end
--			Result.append (string1.twin)
--			Result.append (string2.twin)

--			row_counter := row_counter + 1
--			string1.wipe_out
--			string2.wipe_out
--		end
--	end
end

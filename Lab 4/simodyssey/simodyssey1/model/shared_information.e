note
	description: "[
		Common variables such as threshold for planet
		and constants such as number of stationary items for generation of the board.
		]"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SHARED_INFORMATION

create {SHARED_INFORMATION_ACCESS}
	make

feature{NONE}
	make
		do
			planet_id := 1
			stationary_id := -2
			num_entites := 0
		end

feature

	number_rows: INTEGER = 5
        	-- The number of rows in the grid

	number_columns: INTEGER = 5
        	-- The number of columns in the  grid

	number_of_stationary_items: INTEGER = 10
			-- The number of stationary_items in the grid

    planet_threshold: INTEGER
		-- used to determine the chance of a planet being put in a location
		attribute
			Result := 50
		end

	max_capacity: INTEGER = 4
		 -- max number of objects that can be stored in a location

	planet_id: INTEGER

	stationary_id: INTEGER

	num_entites: INTEGER --number of total entites

feature --commands
	set_planet_threshold(threshold:INTEGER)
		require
			valid_threshold:
				0 < threshold and threshold <= 101
		do
			planet_threshold:=threshold
		end

	planet_increment
			--increments id by 1, used for creation procedure of entites
		do
			planet_id := planet_id + 1
			entites_increment
		end

	stationary_increment
		do
			stationary_id := stationary_id - 1
			entites_increment
		end

	reset
			--reset ids for new game
		do
			planet_id := 1
			stationary_id := -2
			num_entites := 0
		end

feature --queries
	number_of_entities : INTEGER
			--total number of entites
		do
			-- stationary_items + planets + explorer_and_blackhole
			Result := num_entites
		end

feature {NONE} --internal commands
	entites_increment
			--increment total number of entites
		do
			num_entites := num_entites + 1
		end
end

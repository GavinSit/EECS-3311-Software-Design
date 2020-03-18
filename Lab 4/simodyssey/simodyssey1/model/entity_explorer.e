note
	description: "Summary description for {ENTITY_EXPLORER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ENTITY_EXPLORER

inherit
	ENTITY_ALPHABET
		redefine
			make,
			is_equal
		end

create
	make

feature --constructor
	make (a_char: CHARACTER; a_id: INTEGER)
		require else
			is_explorer: a_char ~ 'E' and a_id ~ 0
		do
			precursor(a_char, a_id)
			landed := false
			fuel := max_fuel
			life := max_life
			location := [1, 1]
			land_id := -1
		end

feature {NONE}--attributes
	landed: BOOLEAN --is explorer landed
	fuel: INTEGER
	life: INTEGER
	location: TUPLE [row: INTEGER; col: INTEGER] --[row, col] location of explorer
	land_id: INTEGER --id of planet landed on, if not landed, -1

feature --queries
	get_fuel : INTEGER
			--return fuel level
		do
			Result := fuel
		end

	get_life : INTEGER
			--return life
		do
			Result := life
		end

	get_location : TUPLE [row: INTEGER; col: INTEGER]
		do
			Result := location
		end

	get_landed : BOOLEAN
		do
			Result := landed
		end

	get_land_location : INTEGER
			--id of planet landed on
		do
			Result := land_id
		end

	is_equal (other: ENTITY_EXPLORER): BOOLEAN
		do
			Result := Current.item.is_equal (other.item)

		end

feature --string queries
	location_out : STRING
			--return location in form row:col
		do
			Result := location.row.out + ":" + location.col.out
		end

	location_with_spot : STRING
			--return location with spot in sector (1-4)
		do
			Result := location_out + ":" + sector_place.out
		end

feature --commands
	set_explorer_location(loc: TUPLE [INTEGER, INTEGER])
			--set the new location for explorer
		do
			location := loc
		end

	add_fuel (amount: INTEGER)
			--add fuel up and till max
		do
			if fuel + amount > max_fuel then
				fuel := max_fuel
			else
				fuel := fuel + amount
			end
		ensure
			dont_go_over_max_fuel: fuel <= max_fuel
		end

	lower_fuel
			--decrement fuel
		do
			fuel := fuel -1
		end

	lower_life
			--decrement life
		do
			life := life -1
		end

	kill_explorer
			--explorer dies so life is 0
		do
			life := 0
		end

	set_landed (l: BOOLEAN)
			--set landed or not
		do
			landed := l
			if not landed then --set land_id to -1 because all planets are positive id
				land_id := -1
			end
		ensure
			landed_is_changed: old landed ~ not landed
		end

	set_land_location (a_id: INTEGER)
			--if set_landed is false, auto change to -1 so no need to do it here
		do
			land_id := a_id
		end

feature --constants
	max_fuel : INTEGER
		once
			Result := 3
		end

	max_life : INTEGER
		once
			Result := 3
		end
end

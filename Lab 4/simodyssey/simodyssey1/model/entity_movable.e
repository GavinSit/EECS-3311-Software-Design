note
	description: "Summary description for {ENTITY_MOVABLE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

--todo: what if visited and doesnt support life, can later visit again if support life?
class
	ENTITY_MOVABLE

inherit
	ENTITY_ALPHABET
		redefine
			make,
			is_equal
		end

create
	make

feature --constructor
	make(a_char: CHARACTER; a_id: INTEGER;)
		do
			precursor (a_char, a_id)
			attached_to_planet := false
			support_life := false
			visited := false
			turns_left := 0
			location := [-1,-1] --default unset locaiton
		end

feature {NONE}--attributes
	attached_to_planet: BOOLEAN --cannot move if attached to yellow dwarf
	support_life: BOOLEAN
	visited: BOOLEAN --cannot visit again if visited
	turns_left: INTEGER -- will be -1 when its attached
	location: TUPLE [row: INTEGER; col: INTEGER]

feature --string queries
	get_attached_string : STRING
			--is it attached to planet
		do
			Result := bool_to_string (attached_to_planet)
		end

	get_support_life_string : STRING
			--does planet support life
		do
			Result := bool_to_string (support_life)
		end

	get_visited_string : STRING
			--was planet visited before
		do
			Result := bool_to_string (visited)
		end

feature --queries
	get_attached : BOOLEAN
			--is it attached to planet
		do
			Result := attached_to_planet
		end

	get_support_life : BOOLEAN
			--does planet support life
		do
			Result := support_life
		end

	get_visited : BOOLEAN
			--was planet visited before
		do
			Result := visited
		end

	get_turns_left : INTEGER
		do
			Result := turns_left
		end

	get_location : TUPLE [row: INTEGER; col: INTEGER]
		do
			Result := location
		end

feature --commands
	decrement_turns
			--decrease turns_left by 1
		do
			if turns_left > 0 then
				turns_left := turns_left - 1
			end
		end

	set_turns (t: INTEGER)
		do
			turns_left := t
		end

	set_visited
			--visited
		do
			visited := true
		end

	support_life_generate
			--chance to support life if attached to yellow dwarf
		local
			gen: RANDOM_GENERATOR_ACCESS
			num: INTEGER
		do
			--todo generate support or not	
			if not support_life then --if doesnt support life, chance to
				num := gen.rchoose (1, 2)
				if num = 2 then --support life
					support_life := true
				end
			end
		end

	set_location (a_location: TUPLE [INTEGER, INTEGER])
		do
			location := a_location
		end

	set_attached(b: BOOLEAN)
		do
			attached_to_planet := b
		end

	is_equal (other: ENTITY_MOVABLE): BOOLEAN
		do
			Result := Current.item.is_equal (other.item)
		end

feature {NONE}
	bool_to_string (bool: BOOLEAN) : STRING
			--convert boolean to T/F
		do
			if bool then
				Result := "T"
			else
				Result := "F"
			end
		end
end

note
	description: "A star with luminosity"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ENTITY_STAR

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
			is_star: a_char ~ 'Y' or a_char ~ '*'
		do
			precursor (a_char, a_id)
			if a_char ~ '*' then
				luminosity := 5
			elseif a_char ~ 'Y' then
				luminosity := 2
			end
		end

feature {NONE} --attribute
	luminosity: INTEGER

feature --queries
	get_luminosity : INTEGER
		do
			Result := luminosity
		end

feature --commande
	is_equal (other: ENTITY_STAR): BOOLEAN
		do
			Result := Current.item.is_equal (other.item)
		end

invariant
	valid_luminosity: luminosity ~ 2 or luminosity ~ 5

end

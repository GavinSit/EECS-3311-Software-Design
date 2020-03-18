note
    description: "[
       Alphabet allowed to appear on the galaxy board.
    ]"
    author: "Kevin Banh"
    date: "April 30, 2019"
    revision: "1"

class
    ENTITY_ALPHABET

inherit
    ANY
        redefine
            out,
            is_equal
        end

create
    make

feature -- Constructor
    make (a_char: CHARACTER; a_id: INTEGER)
        do
            item := a_char
            id := a_id
        end

feature -- Attributes
    item: CHARACTER
    id: INTEGER
    sector_place: INTEGER --which spot in the sector its in; 0 means not in a sector

feature -- Query

    out: STRING
            -- Return string representation of alphabet.
        do
            Result := "[" + id.out + "," + item.out + "]"
        end

    is_equal(other : ENTITY_ALPHABET): BOOLEAN
        do
            Result := current.item.is_equal (other.item)
        end

    is_stationary: BOOLEAN
          -- Return if current item is stationary.
    	do
           if item = 'W' or item = 'Y' or item = '*' or item = 'O' then
           		Result := True
           end
        end

feature --command
	set_sector_place (place: INTEGER)
			--set the sector location it is in
		do
			sector_place := place
		end

invariant
    allowable_symbols:
        item = 'E' or item = 'P' or item = 'O' or item = 'W' or item = 'Y' or item = '*'
   	sector_placement: sector_place >= 0 and sector_place <=4
end

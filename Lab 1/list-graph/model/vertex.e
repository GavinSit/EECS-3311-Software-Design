note
	description: "[
		A vertex has an item in the generic parameter, 
		as well as incoming and outgoing edges:
			item: G
			outgoing: LIST[EDGE[G]]
			incoming: LIST[EDGE[G]]
			outgoing_sorted: ARRAY[EDGE[G]]
		outgoing_sorted is an array of edges
		sorted based on comparable items in destination vertices. This allows
		for a unique ordering as in breadth first searches etc.
			]"
	note_to_student: "[
		Only modify features that have a `Todo` comment inside of them.
		You must also write the postcondition for command `remove_edge`.
		]"
	ca_ignore: "CA085"
	author: "JSO and JW"
	date: "$Date$"
	revision: "$Revision$"

class
	VERTEX[G -> COMPARABLE]
inherit
	ANY
		redefine is_equal, out end

	DEBUG_OUTPUT
		redefine is_equal, out end

	COMPARABLE
		redefine is_equal, out end
create
	make

feature {NONE} -- Initialization

	make(a_item: G)
			-- Initialization for `Current'.
		do
			create {LINKED_LIST[EDGE[G]]}outgoing.make
			outgoing.compare_objects
			create {LINKED_LIST[EDGE[G]]}incoming.make
			incoming.compare_objects
			item := a_item
		ensure
			item_set:
				item ~ a_item
			empty_edges:
				outgoing.is_empty and incoming.is_empty
		end

feature -- Comparable

	is_less alias "<" (other: like Current): BOOLEAN
			-- Is current object less than `other'?
		do
			Result := item < other.item
		end

	is_equal(other: like Current): BOOLEAN
		do
			Result := item ~ other.item
		end


feature -- basic queries
	item: G

	outgoing: LIST[EDGE[G]]
		-- outging edges

	incoming: LIST[EDGE[G]]
		-- incoming edges

feature -- derived queries
	sort (a: ARRAY[EDGE[G]]): ARRAY[EDGE[G]] --selection sort
		local
			temp: EDGE[G] --used for swapping
			lowest: INTEGER --store lowest index
		do
			across 1 |..| a.count is i	--iterate through all elements
			loop
				lowest := i
				across i |..| a.count is j loop  --find lowest value from i to end
					if a[j].destination < a[lowest].destination then
						lowest := j
					end
				end
				--swap lowest to index i
				temp := a[i]
				a[i] := a[lowest]
				a[lowest] := temp
			end

			Result := a --return array
		end

	outgoing_sorted: ARRAY[EDGE[G]]
			-- Return outgoing edges as a sorted array
			-- (based on destination vertices of edges).
		local
			sorted_out_array : ARRAY[EDGE[G]]
		--	i : INTEGER
			j : INTEGER
			ran: BOOLEAN
		do
			-- Todo: complete implementation
			create {ARRAY[EDGE[G]]}sorted_out_array.make_empty

			across outgoing is outgo loop --put all items in unsorted array first
				sorted_out_array.force (outgo, sorted_out_array.count + 1)
			end

--			sorted_out_array.force (outgoing[1], 1) --put the first item in first

--			across 2 |..| outgoing.count is i loop
--				ran := false
--				from j := sorted_out_array.count until j < sorted_out_array.lower or ran = true --loops backwards to find right place to place key
--				loop
--					if sorted_out_array[j].destination <= outgoing[i].destination or j = 0 then --if sorted array is smaller, then force into one ahead
--						sorted_out_array.force (outgoing.i_th (i), j+1)
--						ran := true
--					elseif sorted_out_array[j].destination > outgoing[i].destination then --if sorted array is greater than outgoing, the move and shift everything
--						sorted_out_array.force (sorted_out_array[j], j+1)
--					end
--					j := j - 1 --decrement each time
--				end
--			end

			--create Result.make_empty -- this line is for compilation purposes
			Result := sort(sorted_out_array)
		ensure
			-- ∀ i ∈ 1 .. (Result.count - 1) : Result[i].destination ≤ Result[i + 1].destination
			sorted:
				across 1 |..| (Result.count - 1) as l_i all
					Result[l_i.item].destination <= Result[l_i.item + 1].destination
				end
		end

	outgoing_edge_count: INTEGER
		-- number of outgoing edges
		do
			-- Todo: complete implementation
			Result := outgoing.count
		ensure
			outgoing_edge_count:
				Result = outgoing.count
		end

	incoming_edge_count: INTEGER
		-- number of incoming edges
		do

			-- Todo: complete implementation
			result := incoming.count
		ensure
			incoming_edge_count:
				Result = incoming.count
		end

	edge_count: INTEGER
			-- number of incoming and outgoing edges
		do
			-- Todo: complete implementation
			Result := incoming.count + outgoing.count

		ensure
			correct_count:
				Result = incoming_edge_count + outgoing_edge_count
		end


	has_outgoing_edge(a_edge: EDGE[G]): BOOLEAN
			-- `Current` has `a_edge` as an outgoing edge
		do
			-- Todo: complete implementation
			Result := outgoing.has (a_edge)

		ensure
			Result = outgoing.has (a_edge)
		end

	has_incoming_edge(a_edge: EDGE[G]): BOOLEAN
			-- `Current` has `a_edge` as an incoming edge
		do
			-- Todo: complete implementation
			Result := incoming.has(a_edge)
		ensure
			Result = incoming.has (a_edge)
		end

feature -- commands

	add_edge(a_edge: EDGE[G])
		require
			edge_contains_current: a_edge.source ~ Current or a_edge.destination ~ Current
			new_edge: not (has_incoming_edge (a_edge) or has_outgoing_edge (a_edge))
		do
			-- Todo: complete implementation
			--first one is source (outgoing, second one is destination (incoming)
			if a_edge.source ~ Current and not outgoing.has (a_edge) then --if source edge matches this edge and doesnt already exist, then it is outgoing
				outgoing.force(a_edge)
			end

			if a_edge.destination ~ Current and not incoming.has (a_edge) then --if destination edge matches this edge and doesnt already exist, then it is incoming
				incoming.force(a_edge)
			end
		ensure
			edge_destingation_count: a_edge.destination ~ Current implies incoming.count = old incoming.count + 1
			edge_source_count: a_edge.source ~ Current implies outgoing.count = old outgoing.count + 1
			edge_added: a_edge.destination ~ Current implies incoming.has (a_edge)
			edge_added: a_edge.source ~ Current implies outgoing.has (a_edge)
			--no_repeated_edge: old incoming.has (a_edge) or old outgoing.has (a_edge) implies incoming.count = old incoming.count and outgoing.count = old outgoing.count  --already has edge implies no new edge added
			-- incomplete, to add!
		end

	remove_edge(a_edge: EDGE[G])
		require
			a_edge.source ~ Current or a_edge.destination ~ Current
		do
			-- Todo: complete implementation
			if a_edge.source ~ Current and outgoing.has(a_edge) then --if it is source edge remove from outgoing
					outgoing.go_i_th (outgoing.index_of (a_edge, 1))
					outgoing.remove
			end

			if a_edge.destination ~ Current and incoming.has (a_edge) then --if it is destination edge remove from incoming
					incoming.go_i_th (incoming.index_of (a_edge, 1))
					incoming.remove
			end
		ensure
			edge_source_removed: a_edge.source ~ Current implies not outgoing.has (a_edge)
			edge_destination_removed: a_edge.destination ~ Current implies not incoming.has (a_edge)
		end

feature -- out
	out: STRING
			-- Return string representation of current vertex
		do
			Result := item.out + ":"
			across outgoing_sorted as l_edge loop
				Result := Result + l_edge.item.debug_output +","
			end
			Result.remove (Result.count)
		end

	debug_output: STRING
			-- Return string representation of current vertex in debugger
		do
			Result := item.out + ":"
			across outgoing_sorted as l_edge loop
				Result := Result + l_edge.item.destination.item.out +","
			end
			Result.remove (Result.count)
		end

invariant
	outgoing_edges_start_with_current:
		across outgoing as l_edge all
			l_edge.item.source ~ Current
		end

	incoming_edges_end_with_current:
		across incoming as l_edge all
			l_edge.item.destination ~ Current
		end

	object_comparison:
		outgoing.object_comparison and incoming.object_comparison
end

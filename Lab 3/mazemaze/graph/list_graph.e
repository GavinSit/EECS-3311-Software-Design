note
	description: "[
			Directed Graph implemented as Adjacency List 
		    in generic parameter G that is Comparable:
				vertices: LIST[VERTEX[G]]
				edges: ARRAY [EDGE [G]]
				-- commands
				add_edge (e: EDGE [G])
				add_vertex (v: VERTEX [G])
				remove_edge (a_edge: EDGE [G])
				remove_vertex (a_vertex: VERTEX [G])
				
				A vertex has outgoing and incoming edges.
				An edge has a source vertex and destination vertex.
				Vertices and Edges must be attached.
	]"
	ca_ignore: "CA023", "CA023: Undeed parentheses", "CA017", "CA107: Empty compound after then part of if"
	author: "JSO and JW"
	date: "$Date$"
	revision: "$Revision$"

class
	LIST_GRAPH [G -> COMPARABLE]

inherit

	ITERABLE [VERTEX [G]]
		redefine
			out
		end

	DEBUG_OUTPUT
		redefine
			out
		end

create
	make_empty

feature -- Model

	model: COMPARABLE_GRAPH [VERTEX [G]]
			-- abstraction function
		do
			create Result.make_empty
				-- To Do.
			across
				Current.vertices is vertex
			loop --add all the vertices
				Result.vertex_extend (vertex)
			end
			across
				Current.edges is edge
			loop
				Result.edge_extend (edge.as_tuple)
			end
		ensure
			comment ("Establishes model consistency invariants")
		end

feature {NONE} -- Initialization

	make_empty
			-- create empty graph
		do
			create {LINKED_LIST [VERTEX [G]]} vertices.make
			vertices.compare_objects
		ensure
			mm_empty_graph: model.is_empty
		end

	get_vertex (g: G): detachable VERTEX [G]
			-- Return the associated vertext object storing `g`, if any.
			-- Note. In the invariant, it is asserted that all vertices are unique.
		do
				-- To do.
			across
				vertices is vertex
			loop
				if vertex.item ~ g then
					Result := vertex
				end
			end
		ensure
			mm_attached: attached Result implies model.has_vertex (create {VERTEX [G]}.make (g))
			mm_not_attached: not attached Result implies not model.has_vertex (create {VERTEX [G]}.make (g))
		end

feature -- Iterator Pattern

	new_cursor: ITERATION_CURSOR [VERTEX [G]]
		do
			Result := vertices.new_cursor
		end

feature -- queries

	vertices: LIST [VERTEX [G]]

	vertex_count: INTEGER
			-- number of vertices
		do
				-- To do.
			Result := vertices.count
		ensure
			mm_vertex_count: Result = model.vertex_count
		end

	edge_count: INTEGER
			-- number of outgoing edges
		do
				-- To do.
			across
				vertices is vertex
			loop
				Result := Result + vertex.outgoing_edge_count
			end
		ensure
			mm_edge_count: Result = model.edge_count
		end

	is_empty: BOOLEAN
			-- does the graph contain no vertices?
		do
				-- To do.
			Result := vertices.is_empty
		ensure
			comment ("See invariant empty_consistency")
			mm_is_empty: Result = model.is_empty
		end

	has_vertex (a_vertex: VERTEX [G]): BOOLEAN
		do
				-- To do.
			Result := vertices.has (a_vertex)
		ensure
			mm_has_vertex: Result = model.has_vertex (a_vertex)
		end

	has_edge (a_edge: EDGE [G]): BOOLEAN
		do
				-- To do.
			Result := across vertices is vertex some vertex.has_incoming_edge (a_edge) end and across vertices is vertex some vertex.has_outgoing_edge (a_edge) end
		ensure
			mm_has_edge: Result = model.has_edge ([a_edge.source, a_edge.destination])
		end

	edges: ARRAY [EDGE [G]]
			-- array of all outgoing edges
		do
			create Result.make_empty
			Result.compare_objects
				-- To do.
			across
				1 |..| vertices.count is i
			loop
				across
					vertices [i].outgoing is out_edge
				loop
					Result.force (out_edge, Result.count + 1)
				end
			end
		ensure
			mm_edges_count: Result.count = model.edge_count
			mm_edges_membership: across Result as l_edge all model.has_edge ([l_edge.item.source, l_edge.item.destination]) end
		end

feature -- commands

	vertex_of (v: G): VERTEX [G]
			--returns the vertex that belongs to the value of "G" type
		require
			vertex_exists: across vertices is vertex some vertex.item ~ v end
		do
			Result := vertices [1] --returns something if nothing is found but it wont happen
			across
				vertices is vertex
			loop
				if vertex.item ~ v then
					Result := vertex
				end
			end
		end

	add_vertex (a_vertex: VERTEX [G])
		require
			mm_non_existing_vertex: not model.has_vertex (a_vertex)
		do
				-- To do.
			vertices.force (a_vertex)
		ensure
			mm_vertex_added: model ~ (old model.deep_twin) + a_vertex
		end

	add_edge (a_edge: EDGE [G])
		require
			mm_existing_source_vertex: model.has_vertex (a_edge.source)
			mm_existing_destination_vertex: model.has_vertex (a_edge.destination)
			mm_non_existing_edge: not model.has_edge ([a_edge.source, a_edge.destination])
		local
			src, dst: VERTEX [G]
			new_edge: EDGE [G]
		do
			src := vertex_of (a_edge.source.item)
			dst := vertex_of (a_edge.destination.item)

			create new_edge.make (src, dst) --make edge

			if (src ~ dst) then --if cycle
				src.add_edge (new_edge)
			else
				src.add_edge (new_edge)
				dst.add_edge (new_edge)
			end
		ensure
			mm_edge_added: model ~ (old model.deep_twin) |\/| [a_edge.source, a_edge.destination]
		end

	remove_edge (a_edge: EDGE [G])
		require
			mm_existing_edge: model.has_edge ([a_edge.source, a_edge.destination])
		local
			src, dst: VERTEX [G]
		do
				-- To Do.
			src := a_edge.source
			dst := a_edge.destination
			vertex_of (src.item).remove_edge (a_edge)
			vertex_of (dst.item).remove_edge (a_edge)
		ensure
			mm_edge_removed: model ~ (old model.deep_twin) |\ [a_edge.source, a_edge.destination]
		end

	remove_vertex (a_vertex: VERTEX [G])
		require
			mm_existing_vertex: model.has_vertex (a_vertex)
		local
			edge: EDGE [G]
		do
				-- To Do.
				--from lab 1
				--remove all edges associated with that vertex
			across
				vertices is vertex
			loop
				create edge.make (a_vertex, vertex) --incoming means that the source is a_vertex
				if vertex.has_incoming_edge (edge) or vertex.has_outgoing_edge (edge) then --if this vertex has vertex to be removed as incoming
					vertex.remove_edge (edge)
				end
				create edge.make (vertex, a_vertex) --outgoing means that the source is vertex
				if vertex.has_incoming_edge (edge) or vertex.has_outgoing_edge (edge) then --if this vertex has vertex to be removed as incoming
					vertex.remove_edge (edge)
				end
			end

				--remove the actual vertex now
			vertices.go_i_th (vertices.index_of (a_vertex, 1))
			vertices.remove
		ensure
			mm_vertex_removed: model ~ (old model.deep_twin) - a_vertex
		end

feature -- out

	comment (s: STRING): BOOLEAN
		do
			Result := true
		end

	debug_output: STRING
		do
			Result := ""
			across
				vertices as l_vertex
			loop
				Result := Result + "[" + l_vertex.item.debug_output + "]"
			end
		end

	out: STRING
		do
			Result := ""
			across
				vertices as l_vertex
			loop
				Result := Result + "[" + l_vertex.item.out + "]"
			end
		end

feature --advanced queries
	shortest_path (src, destination: VERTEX [G]): ARRAY [VERTEX [G]]
		--modification of reachable to return array of shortest path to finish
		require
			mm_existing_source: model.has_vertex (src)
		local
			-- Include declarations for local variables used here
			queue: ARRAYED_QUEUE [VERTEX [G]] --queue for vertex to be searched from
			front, adjacent, v: VERTEX [G]
			parents: ARRAY2 [VERTEX [G]] --store the parents of the visited first is the vertex and second is parent
			visited: ARRAY [VERTEX [G]]
			i, j, parentindex: INTEGER
		do
			--gets outgoing sorted, then queue each one to be visited
			create Result.make_empty
			create visited.make_empty
			create parents.make_filled (destination, 2, vertices.count-1)
			create queue.make (vertices.count)
			parents.compare_objects
			parentindex := 1
			queue.compare_objects
			visited.compare_objects

			from
				queue.extend (src)
			until
				queue.is_empty or visited.has (destination) --run until queue is empty or the destination is found
			loop
				front := queue.item
				if not visited.has (front) then --if doesnt hasnt already been visited
					visited.force (front, visited.count+1)
					across front.outgoing_sorted is edge loop
						if not visited.has (edge.destination) then
							parents.put (edge.destination, 1, parentindex)
							parents.put (front, 2, parentindex)
							parentindex := parentindex + 1
							queue.extend (edge.destination) --not visited yet
						end
					end
				end
				queue.remove --done with item at front of queue so pop it
			end

			--found the end now isolate shortest path
			--Result will have an array from destination to src
			from
				Result.force (destination, Result.count+1) --add the src
			until
				Result.has (src) --until destination has been found  and added
			loop
				--find the parent Results and push the parent
				from
					j := 1
				until
					j = parents.width
				loop
					if parents[1, j] ~ Result.at (Result.count) then
						Result.force (parents[2, j], Result.count+1) --push the parents of the last vertex in Result
						j := parents.width --make exit condition true
					end
					j := j + 1
				end
			end
		ensure
			mm_reachable_in_model: model.reachable (src).as_array ~ Result
		end

feature -- agent functions

	vertices_edge_count: INTEGER
			-- total number of incoming and outgoing edges of all vertices in `vertices`
			-- Result = (Σv ∈ vertices : v.outgoing_edge_count + v.incoming_edge_count)
		do
			Result := vertices_outgoing_edge_count + vertices_incoming_edge_count
		end

	vertices_outgoing_edge_count: INTEGER
			-- total number of outgoing edges of all vertices in `vertices`
			-- Result = (Σv ∈ vertices : v.outgoing_edge_count)
		do
			Result := {NUMERIC_ITERABLE [VERTEX [G]]}.sumf (vertices, agent  (v: VERTEX [G]): INTEGER
				do
					Result := v.outgoing_edge_count
				end)
		end

	vertices_incoming_edge_count: INTEGER
			-- total number of incoming edges of all vertices in `vertices`
			-- Result = (Σv ∈ vertices : v.incoming_edge_count)
		do
			Result := {NUMERIC_ITERABLE [VERTEX [G]]}.sumf (vertices, agent  (v: VERTEX [G]): INTEGER
				do
					Result := v.incoming_edge_count
				end)
		end

invariant
	empty_consistency: vertices.count = 0 implies edges.count = 0
	vertex_count = vertices.count
	vertices.lower = 1
	unique_vertices: across 1 |..| vertex_count as i all across 1 |..| vertex_count as j all i.item /= j.item implies vertices [i.item] /~ vertices [j.item] end end
	consistency_incoming_outgoing: across vertices is l_vertex all across l_vertex.outgoing is l_edge all l_edge.destination.has_incoming_edge (l_edge) end and across l_vertex.incoming is l_edge all l_edge.source.has_outgoing_edge (l_edge) end end
	consistency_incoming_outgoing2:
			-- ∀e ∈ edges:
			--	   ∧ e ∈ e.source.outgoing
			--	   ∧ e ∈ e.destination.incoming
		across edges as l_edge all l_edge.item.source.has_outgoing_edge (l_edge.item) and l_edge.item.destination.has_incoming_edge (l_edge.item) end
	model_consistency_vertex_count: model.vertex_count = vertex_count
	model_consistency_edge_count: model.edge_count = edge_count
	model_consistency_vertices: across model.vertices as l_v all has_vertex (l_v.item) end
	model_consistency_edges: across model.edges as l_e all has_edge ([l_e.item.first, l_e.item.second]) end
	count_property_symmetry_1: -- (Σv ∈ vertices : v.outgoing_edge_count + v.incoming_edge_count) = 2 * edge_count
		vertices_edge_count = 2 * edge_count
	count_property_symmetry_2: -- (Σv ∈ vertices : v.outgoing_edge_count) = (Σv ∈ vertices : v.incoming_edge_count)
		vertices_outgoing_edge_count = vertices_incoming_edge_count
	self_loops_are_incomng_and_outgoing: across vertices is l_vertex all across l_vertex.incoming is l_edge some l_edge.source ~ l_edge.destination end = across l_vertex.outgoing is l_edge some l_edge.source ~ l_edge.destination end end

end

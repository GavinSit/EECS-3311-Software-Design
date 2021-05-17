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
	make_empty, make_from_array

feature -- Modeltop

	model: COMPARABLE_GRAPH [VERTEX [G]]
			-- abstraction function
			-- This must be implemented so that the contracts will work properly
			-- You must find a way to translate the `LIST_GRAPH` implementation into the mathematical
			-- model representation of a graph: `COMPARABLE_GRAPH` (which inherits from `GRAPH`).
		do
			create Result.make_empty
				-- To Do.
			across Current.vertices is vertex loop --add all the vertices
				Result.vertex_extend (vertex)
			end

			across Current.edges is edge loop
				Result.edge_extend (edge.as_tuple)
			end

		ensure
			comment ("Establishes model consistency invariants")
			count: vertices.count = Result.vertices.count
			content: across vertices is v all model.vertices.has (v) end
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
				-- To Do.
			across vertices is vertex loop
				if vertex.item ~ g then
					Result := vertex
				end
			end

		ensure
			mm_attached: attached Result implies model.has_vertex (create {VERTEX [G]}.make (g))
			mm_not_attached: not attached Result implies not model.has_vertex (create {VERTEX [G]}.make (g))
		end

	make_from_array (a: ARRAY [TUPLE [src: G; dst: G]])
			-- create a new graph from an array of tuples
			-- each tuple stores contents for the source and the destination
		require
			a.object_comparison
		local
			l_v1, l_v2: VERTEX [G]
			l_e: EDGE [G]
		do
			create {LINKED_LIST [VERTEX [G]]} vertices.make
			vertices.compare_objects
			across
				a as tuple
			loop
				if attached get_vertex (tuple.item.src) as v1 then
					l_v1 := v1 -- so that we do not reset the `income` and `outgoing` lists of the existing vertex
				else
					create l_v1.make (tuple.item.src)
				end
				if attached get_vertex (tuple.item.dst) as v2 then
					l_v2 := v2 -- so that we do not reset the `income` and `outgoing` lists of the existing vertex
				else
					create l_v2.make (tuple.item.dst)
				end
				create l_e.make (l_v1, l_v2)
				if not has_vertex (l_v1) then
					add_vertex (l_v1)
				end
				if not has_vertex (l_v2) then
					add_vertex (l_v2)
				end
				if not has_edge (l_e) then
					add_edge (l_e)
				end
			end
		ensure
			mm_edges:
				-- ∀ [src, dst] ∈ a : [src, dst] ∈ model.edges
				across a as l_edge all
					model.has_edge ([create {VERTEX [G]}.make (l_edge.item.src),
												 create {VERTEX [G]}.make (l_edge.item.dst)])
				end

			mm_vertices:
				-- ∀ [src, dst] ∈ a : src ∈ model.vertices ∧ dst ∈ model.vertices
				across a as l_edge all
					model.has_vertex (create {VERTEX [G]}.make (l_edge.item.src))
					and
					model.has_vertex (create {VERTEX [G]}.make (l_edge.item.dst))
				end
		end

feature -- Iterator Pattern

	new_cursor: ITERATION_CURSOR [VERTEX [G]]
			-- returns a new cursor for current graph
		do
			Result := vertices.new_cursor
		end

feature -- queries

	vertices: LIST [VERTEX [G]]
			-- list of vertices

	vertex_count: INTEGER
			-- number of vertices
		do
				-- To Do.
			Result := vertices.count
		ensure
			mm_vertex_count: Result = model.vertex_count
		end

	edge_count: INTEGER
			-- number of outgoing edges
		do
				-- To Do.
			across vertices is vertex loop
				Result := Result + vertex.outgoing_edge_count
			end
		ensure
			mm_edge_count: Result = model.edge_count
		end

	is_empty: BOOLEAN
			-- does the graph contain no vertices?
		do
				-- To Do.
			Result := vertices.is_empty
		ensure
			comment ("See invariant empty_consistency")
			mm_is_empty: Result = model.is_empty
		end

	has_vertex (a_vertex: VERTEX [G]): BOOLEAN
			-- does the current graph have `a_vertex`?
		do
				-- To Do.
			Result := vertices.has (a_vertex)
		ensure
			mm_has_vertex: Result = model.has_vertex (a_vertex)
		end

	has_edge (a_edge: EDGE [G]): BOOLEAN
			-- does the current graph have `a_edge`?
		do
				-- To Do.
			Result :=
				across vertices is vertex some
					vertex.has_incoming_edge (a_edge) or vertex.has_outgoing_edge (a_edge)
				end
		ensure
			mm_has_edge: Result = model.has_edge ([a_edge.source, a_edge.destination])
		end

	edges: ARRAY [EDGE [G]]
		-- array of all outgoing edges
		do
			create Result.make_empty
				-- To Do.
			across 1 |..| vertices.count is i loop
				across vertices[i].outgoing is out_edge loop
					Result.force (out_edge, Result.count+1)
				end
			end
		ensure
			mm_edges_count: Result.count = model.edge_count
			mm_edges_membership: across Result as l_edge all model.has_edge ([l_edge.item.source, l_edge.item.destination]) end
		end
	vertex_of (v: G): VERTEX [G]
			--returns the vertex that belongs to the value of "G" type
		require
			vertex_exists: across vertices is vertex some vertex.item ~ v end
		do
			Result := vertices[1] --returns something if nothing is found but it wont happen
			across vertices is vertex loop
				if vertex.item ~ v then
					Result := vertex
				end
			end
		end

feature -- Advanced Queries

	topologically_sorted: ARRAY [VERTEX [G]]
			-- Return an array <<..., vi, ..., vj, ...>> such that
			-- (vi, vj) in edges => i < j
			-- A topological sort is performed.
		require
			is_acyclic: model.is_acyclic
		local
			in_degree: FUN [VERTEX [G], INTEGER] --number of incoming unvisited edges
			queue: QUEUE [VERTEX [G]]
			front: VERTEX [G]
		do
			from
				create queue.make_empty
				create in_degree.make_empty
				create Result.make_empty
				Result.compare_objects

				across vertices is v loop --add all the in edge counts to in_degree
					in_degree := in_degree @<+ [v, v.incoming_edge_count] --@<+ is union
				end

				across vertices is v loop --if degree 0, then queue it first as its top of graph
					if in_degree[v] = 0 then
						queue.enqueue (v)
					end
				end
			until
				queue.is_empty
			loop
				front := queue.first
				queue.dequeue
				Result.force (front, Result.count+1)

				across front.outgoing is e loop
					in_degree := in_degree @<+ [e.destination, in_degree [e.destination]-1]
					if in_degree[e.destination] = 0 then --queue if no more incoming
						queue.enqueue (e.destination)
					end
				end
			end
		ensure
			mm_sorted: Result ~ model.topologically_sorted.as_array
		end

	is_topologically_sorted (seq: like topologically_sorted): BOOLEAN
			-- does `seq` represent a topological order of the current graph?
		do
				-- To Do.
				--check that it is sorted from smallest to largest
				--all edges (u,v) has u earlier in the array than v
			Result := 	across Current.edges is edge all
							--check that index of source is less than index of destination
							 index_of (seq, edge.source) < index_of (seq, edge.destination)
				   		end
		end

	index_of (seq: like topologically_sorted; vertex: VERTEX [G]): INTEGER
		--index of vertex in seq
		local
			i: INTEGER
		do
			from
			 	i := 1
			until
				i > seq.count-- or Result /= void
			loop
				if seq.at (i) ~ vertex then
					Result := i
				end
				i := i + 1
			end
		ensure
			in_range: Result >= 1 and Result <= seq.count
		end

feature -- advanced queries (Lab 1)

	reachable (src: VERTEX [G]): ARRAY [VERTEX [G]]
			-- Starting with vertex `src`, return the list of vertices visited via a breadth-first search.
			-- It is required that `outgoing_sorted` is used for each vertex to reach out to its neighbouring vertices,
			-- so that the resulting array is uniquely ordered.
			-- Note. `outgoing_sorted` is somewhat analogous to `adjacent` in the abstract algorithm documentation of BFS.
		require
			mm_existing_source: model.has_vertex (src)
--		do
--			create Result.make_empty
--				-- To Do.
		local
			-- Include declarations for local variables used here
			visited: ARRAY [VERTEX [G]] --final array for storing search results
			queue: ARRAYED_QUEUE [VERTEX [G]] --queue for vertex to be searched from
			front, adjacent: VERTEX [G]
		do
			--gets outgoing sorted, then queue each one to be visited
			create Result.make_empty
			create visited.make_empty
			create queue.make (vertices.count)
			queue.compare_objects
			Result.compare_objects

			from
				queue.extend (src)
			until
				queue.is_empty
			loop
				front := queue.item
				if not Result.has (front) then --if doesnt hasnt already been visited
--					visited.force (front, visited.count+1)
					Result.force (front, Result.count+1)
					across front.outgoing_sorted is edge loop
						if Result.has (edge.destination) then
							--loop
						else
							queue.extend (edge.destination) --not visited yet
						end
					end
				end
				queue.remove --done with item at front of queue so pop it
			end

--			across queue.first.outgoing_sorted is edge loop --iterates through sorted and queues non visited items and
--				if not visited.has (edge.destination)then -- not visted implies that its not queued yet
--					visited.force (edge.destination, visited.count + 1) --add to visited
--					queue.enqueue (edge.destination) --add to queue to traverse later
--				end
--			end
		ensure
			mm_reachable_in_model: model.reachable (src).as_array ~ Result
		end

feature -- commands

	add_vertex (a_vertex: VERTEX [G])
			-- adds `a_vertex` to current graph
		require
			mm_non_existing_vertex: not model.has_vertex (a_vertex)
		do
				-- To Do.
			vertices.force (a_vertex)
		ensure
			mm_vertex_added: model ~ (old model.deep_twin) + a_vertex
		end

	add_edge (a_edge: EDGE [G])
			-- adds `a_edge` to the current graph
		require
			mm_existing_source_vertex: model.has_vertex (a_edge.source)
			mm_existing_destination_vertex: model.has_vertex (a_edge.destination)
			mm_non_existing_edge: not model.has_edge ([a_edge.source, a_edge.destination])
		local
			src, dst: VERTEX [G]
			new_edge: EDGE [G]
		do
				-- To Do.
			--from lab 1
			src := a_edge.source
			dst := a_edge.destination

			--check if src and dst is in vertices or if it is newly declared vertex with same property as one
			if vertices.has (src) and across vertices is v some v.item ~ src.item end then --if newly declared but it exists
				src := Current.vertex_of (src.item)
			end

			if vertices.has (dst) and across vertices is v some v.item ~ src.item end then
				dst := Current.vertex_of (dst.item)
			end

			create new_edge.make (src, dst)

			across vertices is v loop
				if v.item ~ new_edge.source.item or v.item ~ new_edge.destination.item then
					v.add_edge(new_edge)
				end
			end

		ensure
			mm_edge_added: model ~ (old model.deep_twin) |\/| [a_edge.source, a_edge.destination]
		end

	remove_edge (a_edge: EDGE [G])
			-- removes `a_edge` from the current graph
		require
			mm_existing_edge: model.has_edge ([a_edge.source, a_edge.destination])
		local
			src, dst: VERTEX [G]
		do
				-- To Do.
			src := a_edge.source
			dst := a_edge.destination

			vertex_of(src.item).remove_edge (a_edge)
			vertex_of(dst.item).remove_edge (a_edge)
		ensure
			mm_edge_removed: model ~ (old model.deep_twin) |\ [a_edge.source, a_edge.destination]
		end

	remove_vertex (a_vertex: VERTEX [G])
			-- removes `a_vertex` from the current graph
		require
			mm_existing_vertex: model.has_vertex (a_vertex)
		local
			edge: EDGE [G]
		do
				-- To Do.
			--from lab 1
			--remove all edges associated with that vertex
			across vertices is vertex loop
				create edge.make(a_vertex, vertex) --incoming means that the source is a_vertex
				if vertex.has_incoming_edge (edge) or vertex.has_outgoing_edge (edge) then --if this vertex has vertex to be removed as incoming
					vertex.remove_edge(edge)
				end
				create edge.make(vertex, a_vertex) --outgoing means that the source is vertex
				if vertex.has_incoming_edge (edge) or vertex.has_outgoing_edge (edge) then --if this vertex has vertex to be removed as incoming
					vertex.remove_edge(edge)
				end
			end

			--remove the actual vertex now
			vertices.go_i_th (vertices.index_of (a_vertex, 1))
			vertices.remove
		ensure
			mm_vertex_removed: model ~ (old model.deep_twin) - a_vertex
		end

	sort (list : LINKED_LIST [VERTEX [G]]): LINKED_LIST [VERTEX [G]]
	require
		list.count > 0
	local
		lowest: INTEGER
	do
		across 1 |..| list.count is i loop
			lowest := i
			across i |..| list.count is j loop
				if list[lowest].item > list[j].item then
					lowest := j
				end
			end
			list.go_i_th (i)
			list.swap (lowest)
		end
		Result := list
	ensure
		sorted: across 1 |..| (list.count-1) is i all list[i].item < list[i+1].item end
		list.count = old list.count
	end


feature -- out

	comment (s: STRING): BOOLEAN
		do
			Result := true
		end

	debug_output: STRING
			-- returns a string representation of current graph
			-- in the debugger
		do
			Result := ""
			across
				vertices as l_vertex
			loop
				Result := Result + "[" + l_vertex.item.debug_output + "]"
			end
		end

	out: STRING
			-- returns a string representation of current graph
		do
			Result := ""
			across
				vertices as l_vertex
			loop
				Result := Result + "[" + l_vertex.item.out + "]"
			end
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
	empty_consistency:
		vertices.count = 0 implies edges.count = 0
	vertex_count = vertices.count
	vertices.lower = 1
	unique_vertices:
		across 1 |..| vertex_count is i all
		across 1 |..| vertex_count is j all
			i /= j implies vertices [i] /~ vertices [j]
		end end
	consistency_incoming_outgoing:
		across vertices is l_vertex all
			across l_vertex.outgoing is l_edge all
				l_edge.destination.has_incoming_edge (l_edge)
			end
			and
			across l_vertex.incoming is l_edge all
				l_edge.source.has_outgoing_edge (l_edge)
			end
		end
	consistency_incoming_outgoing2:
			-- ∀e ∈ edges:
			--	   ∧ e ∈ e.source.outgoing
			--	   ∧ e ∈ e.destination.incoming
		across edges is l_edge all
			l_edge.source.has_outgoing_edge (l_edge)
			and
			l_edge.destination.has_incoming_edge (l_edge)
		end
	model_consistency_vertex_count:
		model.vertex_count = vertex_count
	model_consistency_edge_count:
		model.edge_count = edge_count
	model_consistency_vertices:
		across model.vertices is l_v all
			has_vertex (l_v)
		end
	model_consistency_edges:
		across model.edges is l_e all
			has_edge ([l_e.first, l_e.second])
		end
	count_property_symmetry_1:
		-- (Σv ∈ vertices : v.outgoing_edge_count + v.incoming_edge_count) = 2 * edge_count
		vertices_edge_count = 2 * edge_count
	count_property_symmetry_2:
		-- (Σv ∈ vertices : v.outgoing_edge_count) = (Σv ∈ vertices : v.incoming_edge_count)
		vertices_outgoing_edge_count = vertices_incoming_edge_count
	self_loops_are_incomng_and_outgoing:
		across vertices is l_vertex all
			across l_vertex.incoming is l_edge some
				l_edge.source ~ l_edge.destination
			end
			=
			across l_vertex.outgoing is l_edge some
				l_edge.source ~ l_edge.destination
			end
		end
end

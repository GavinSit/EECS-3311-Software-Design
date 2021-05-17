note
	description: "Summary description for {STUDENT_TEST}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	STUDENT_TEST

inherit
	ES_TEST

create
	make
feature {NONE}-- Initialization

	make
		do
			add_boolean_case(agent t1)
			add_boolean_case(agent t2)
			add_boolean_case(agent t3)
			add_boolean_case(agent t4)
			add_boolean_case(agent t5)
		end

feature -- Tests

	t1: BOOLEAN
		local
			v: VERTEX [FLOAT]
		do
			comment("t1: Create float vertices")

			create v.make (1.3)
			Result := v.item = 1.3
			check
				Result
			end

			create v.make (-22)
			Result := v.item = -22
			check
				Result
			end
		end

	t2: BOOLEAN
		local
			v1: VERTEX [INTEGER]
			v2: VERTEX [INTEGER]
			e: EDGE [INTEGER]
		do
			comment("t2: Test vertex functions")
			create v1.make (1)
			create v2.make (2)
			create e.make (v1, v2)
			v1.add_edge (e)
			Result := v1.has_outgoing_edge (e) = true and v1.has_incoming_edge (e) = false
			check
				Result
			end

			Result := v1.edge_count = 1 and v2.edge_count = 0
			check
				Result
			end

			Result := v1.is_less (v2) = true
			check
				Result
			end

		end

	t3: BOOLEAN
		local
			graph: LIST_GRAPH [INTEGER]
			array: ARRAY [TUPLE [INTEGER, INTEGER]]
			v1: VERTEX [INTEGER]
			v2: VERTEX [INTEGER]
			edge: EDGE [INTEGER]
		do
			comment("t3: test graph functions")

			array := <<[1, 2], [3, 1], [4, 6], [2, 5], [5, 6], [6, 5]>>
			array.compare_objects
			create graph.make_from_array (array)
			assert_equal ("correct vertices & edges", "[1:2][2:5][3:1][4:6][6:5][5:6]", graph.out)
			Result := graph.edge_count = 6 and graph.vertex_count = 6
			check
				Result
			end
			create v1.make (8)
			create v2.make (9)
			graph.add_vertex (v1)
			graph.add_vertex (v2)
			create edge.make (v1, v2)
			graph.add_edge (edge)

			Result := graph.edge_count = 7	and graph.vertex_count = 8
			check
				Result
			end

			create v1.make (3333)
			Result := graph.has_vertex (v1) = false
			check
				Result
			end

			Result := v2 ~ graph.vertex_of (9)
			check
				Result
			end
		end

	t4: BOOLEAN
		local
			graph: LIST_GRAPH [INTEGER]
			vertex: VERTEX [INTEGER]
		do
			comment("t4: Advanced Queries, none of the vertex are reachable")
			create graph.make_empty
			across 1 |..| 6 is i loop --add vertices
				create vertex.make (i)
				graph.add_vertex (vertex)
			end

			assert_equal ("correct vertices & edges", "[1][2][3][4][5][6]", graph.out)
			Result := graph.edge_count = 0 and graph.vertex_count = 6
			check
				Result
			end
		end

	t5: BOOLEAN
		local
			graph: LIST_GRAPH [INTEGER]
			array: ARRAY [TUPLE [INTEGER, INTEGER]]
			vertex: VERTEX [INTEGER]
		do
			comment("t5: delete vertices from graph")
			array := <<[1, 2], [3, 1], [4, 6], [2, 5], [5, 6], [6, 5]>>
			array.compare_objects
			create graph.make_from_array (array)
			assert_equal ("correct vertices & edges", "[1:2][2:5][3:1][4:6][6:5][5:6]", graph.out)
			Result := graph.edge_count = 6 and graph.vertex_count = 6
			check
				Result
			end

			across 1 |..| 6 is i loop
				create vertex.make (i)
				graph.remove_vertex (vertex)
			end
			Result := graph.vertex_count = 0 and graph.edge_count = 0
			check
				Result
			end
		end
end

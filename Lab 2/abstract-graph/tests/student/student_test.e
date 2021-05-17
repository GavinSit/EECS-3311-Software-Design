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
feature {NONE} -- Initialization

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
			lg: LIST_GRAPH [INTEGER]
			ta: ARRAY [TUPLE [INTEGER, INTEGER]]
		do
			comment("t1: Test that the model works correctly")
			create lg.make_empty
			Result := lg.vertex_count ~ 0 and lg.edge_count ~ 0
			check Result end

			ta := <<[1,2]>>
			ta.compare_objects
			create lg.make_from_array (ta)

			Result := lg.vertex_count ~ 2 and lg.edge_count ~ 1
			check Result end

			assert_equal ("correct vertices & edges", "[1:2][2]", lg.out)
		end

	t2: BOOLEAN
		local
			graph: LIST_GRAPH [INTEGER]
			v1: VERTEX [INTEGER]
		do
			comment("t2: Test not Reachable")
			create graph.make_empty

			across 1 |..| 6 is i loop --create and add vertices
				create v1.make (i)
				graph.add_vertex (v1)
			end

			--check that when running reachable, there should only be itself that is reachable
			Result := across 1 |..| 6 is i all graph.reachable (graph.vertices[i]).count ~ 1 end
			check Result end
		end

	t3: BOOLEAN
		local
			graph: LIST_GRAPH [INTEGER]
			array: ARRAY [TUPLE [INTEGER, INTEGER]]
		do
			comment("t3: Test topological sort")
			array := << [1, 2], [2, 3], [3, 4], [4, 5], [5, 6]>>
			array.compare_objects

			create graph.make_from_array (array)
			assert_equal ("correct vertices & edges", "[1:2][2:3][3:4][4:5][5:6][6]", graph.out)

			Result := graph.is_topologically_sorted (graph.topologically_sorted)
			check Result end
		end

	t4: BOOLEAN
		local
			graph: LIST_GRAPH [STRING]
			array: ARRAY [TUPLE [STRING, STRING]]
		do
			comment("t4: test topological sort with string")
			array := << ["james", "jocelyn"], ["jocelyn", "gavin"], ["jocelyn", "rahim"], ["james", "pete"], ["gavin", "john"]>>
			array.compare_objects
			create graph.make_from_array (array)

			Result := graph.vertex_count ~ 6 and graph.edge_count ~ 5
			check Result end

			Result := graph.is_topologically_sorted (graph.topologically_sorted)
			check Result end
		end

	t5: BOOLEAN
		local
			graph: LIST_GRAPH [INTEGER]
			v1, v2: VERTEX [INTEGER]
			edge: EDGE [INTEGER]
		do
			comment("t5: Both src and dst don't exist but share shame item")
			create graph.make_empty

			across 1 |..| 6 is i loop --create and add vertices
				create v1.make (i)
				graph.add_vertex (v1)
			end

			create edge.make (graph.vertices[1], graph.vertices[3])
			graph.add_edge (edge)
			create edge.make (graph.vertices[2], graph.vertices[3])
			graph.add_edge (edge)
			create edge.make (graph.vertices[4], graph.vertices[3])
			graph.add_edge (edge)
			create edge.make (graph.vertices[5], graph.vertices[3])
			graph.add_edge (edge)

			assert_equal ("correct vertices & edges", "[1:3][2:3][3][4:3][5:3][6]", graph.out)
			Result := graph.edge_count ~ 4 and graph.vertex_count ~ 6
			check Result end

			create v1.make (3)
			create v2.make (6)
			create edge.make (v1, v2)
			graph.add_edge (edge)

			assert_equal ("correct vertices & edges", "[1:3][2:3][3:6][4:3][5:3][6]", graph.out)
		end
end

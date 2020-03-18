note
	description: "Summary description for {STARTER_TESTS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TEST

inherit
	ES_TEST

create
	make

feature {NONE} -- Initialization

	make
		do
			create maze_generator.make
			add_boolean_case (agent t1)
			add_boolean_case (agent t2)
--			add_boolean_case (agent t3)
		end

feature -- Attributes

	maze_generator: MAZE_GENERATOR

	du: DIRECTION_UTILITY

feature -- Tests

	t1: BOOLEAN
		local
			lg: LIST_GRAPH [COORDINATE]
			c1, c2, c3: VERTEX [COORDINATE]
			e1, e2: EDGE [COORDINATE]
		do
			comment ("t1: Test edges working correctly")
			create lg.make_empty

				--create coordinate vertices
			create c1.make ([1, 1])
			create c2.make ([2, 2])
			create c3.make ([3, 3])

				--add vertices
			lg.add_vertex (c1)
			lg.add_vertex (c2)
			lg.add_vertex (c3)

				--create and add edge as well as reverse edge
			create e1.make (c1, c2)
			create e2.make (c2, c3)
			lg.add_edge (e1)
			lg.add_edge (e1.reverse_edge)
			lg.add_edge (e2)
			lg.add_edge (e2.reverse_edge)

			Result := 4 = lg.edge_count
			check
				Result
			end
			Result := across lg.edges is edge all lg.edges.has (edge.reverse_edge) end
			check
				Result
			end
		end

	t2: BOOLEAN
	local
		lg: LIST_GRAPH [INTEGER]
		v: VERTEX [INTEGER]
		e1, e2, e3: EDGE [INTEGER]
		a: ARRAY [VERTEX [INTEGER]]
	do
		comment("t2: test small shortest path")
		create lg.make_empty

		across 1 |..| 3 is i loop
			create v.make (i)
			lg.add_vertex (v)
		end

		create e1.make (lg.vertex_of (1), lg.vertex_of (2))
		create e2.make (lg.vertex_of (2), lg.vertex_of (3))
		create e3.make (lg.vertex_of (1), lg.vertex_of (3))

		lg.add_edge (e1)
		lg.add_edge (e1.reverse_edge)
		lg.add_edge (e2)
		lg.add_edge (e2.reverse_edge)
		lg.add_edge (e3)
		lg.add_edge (e3.reverse_edge)

--		assert_equal("correct edges added", "[1:2,3][2:1,3][3:1,2]", lg.out)
--		print (lg.out)
		Result := lg.vertex_count ~ 3 and lg.edge_count ~ 6
		check Result end

		a := lg.shortest_path (lg.vertex_of (1), lg.vertex_of (3))
		print (a.out)

		check a.count ~ 2 end


	end

	t3: BOOLEAN
		local
			md: MAZE_DRAWER
			mazeString: STRING
			g: LIST_GRAPH [COORDINATE]
			sp: ARRAY [VERTEX [COORDINATE]] --shortest path
		do
			comment("t3: test solve maze")
			create md.make (maze_generator.generate_new_maze (1))
			print (md.out)

			mazeString := "[

  +-*-+---+---+---+---+---+---+
  | X                         |
  +   +   +   +---+---+   +   +
  |       |   |       |       |
  +   +---+   +---+   +---+   +
  |   |                   |   |
  +   +   +   +   +---+   +   +
  |   |       |   |       |   |
  +   +   +---+   +   +   +   +
  |       |   |   |           |
  +---+   +   +   +---+   +---+
  |   |   |       |       |   |
  +   +   +   +   +---+   +   +
  |       |                   |
  +---+---+---+---+---+---+- -+

				]"

			Result := md.out ~ mazeString
			check Result end

			g := md.maze_graph
			sp := g.shortest_path (g.vertex_of (md.player_coord), g.vertex_of ([md.size*2, md.size]))




		end

end

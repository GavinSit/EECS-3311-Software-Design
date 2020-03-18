note
	description: "Summary description for {TEST}."
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
			add_boolean_case (agent t1)
			add_boolean_case (agent t2)
		end

feature --attributes
	du : DIRECTION_UTILITY


feature --tests

	t1: BOOLEAN
		do
			comment("t1: test direction utility")

			Result :=
				du.num_dir (1) ~ [-1,0] and --N
				du.num_dir (2) ~ [-1,1] and
				du.num_dir (3) ~ [0,1] and --E
				du.num_dir (4) ~ [1,1] and
				du.num_dir (5) ~ [1,0] and --S
				du.num_dir (6) ~ [1,-1] and
				du.num_dir (7) ~ [0,-1] and --W
				du.num_dir (8) ~ [-1,-1]

			check Result end
		end

	t2: BOOLEAN
		do
			comment("t2: ")

			Result := true
		end
end

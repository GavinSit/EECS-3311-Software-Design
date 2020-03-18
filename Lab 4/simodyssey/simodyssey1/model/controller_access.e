note
	description: "Summary description for {CONTROLLER_ACCESS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

expanded class
	CONTROLLER_ACCESS

feature
	controller: CONTROLLER
		once
			create Result.make
		end

invariant
	controller = controller
end

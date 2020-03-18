note
	description: "Summary description for {STRING_UPDATE_ACCESS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

expanded class
	STRING_UPDATE_ACCESS

feature --query 
	string_update: STRING_UPDATE
		once
			create Result.make
		end

invariant
	string_update = string_update

end

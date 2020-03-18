note
	description: "Singleton access to the default business model."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

expanded class
	ETF_SIMODYSSEY_ACCESS

feature
	m: ETF_SIMODYSSEY
		once
			create Result.make
		end

invariant
	m = m
end





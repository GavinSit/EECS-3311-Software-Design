note
	description: "store the possible error messages that will be used"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MESSAGE

feature --error messages
	msg_not_in_mission: STRING
			--when you try to do in game action when not in game
		do
			Result := "  Negative on that request:no mission in progress."
		end

	msg_already_in_game : STRING
			--when you try to start new game test or play when already in game
		do
			Result := "  To start a new mission, please abort the current one first."
		end

feature --init message
	msg_first_run : STRING
			--message when you just enter system
		do
			Result := "  Welcome! Try test(30)"
		end

feature --in game messages
	msg_no_life (location: STRING) : STRING
			--when no life is found when landing on planet
		do
			Result := "  Explorer found no life as we know it at Sector:" + location
		end

	msg_found_life : STRING
			--when you find life and finish game
		do
			Result := "  Tranquility base here - we've got a life!"
		end

	msg_no_wormhole (location: STRING) : STRING
			--no wormhole to travel through
		do
			Result := "  Explorer couldn't find wormhole at Sector:" + location
		end

	msg_planet_died : STRING
			--will show when planet goes into black hole during test
		do
			Result := "  Planet got devoured by blackhole (id: -1) at Sector:3:3"
		end

feature --game ended message
	msg_out_of_fuel (location: STRING) : STRING
			--game over, out of fuel
		do
			Result := "  Explorer got lost in space - out of fuel at Sector:" + location
		end

	msg_abort : STRING
			--aborted mission
		do
			Result := "  Mission aborted. Try test(30)"
		end

	msg_game_over : STRING
		do
			Result := "  The game has ended. You can start a new game."
		end

	msg_blackhole : STRING
			--entered a blackhole, game over
		do
			create Result.make_from_string ("  Explorer got devoured by blackhole (id: -1) at Sector:3:3")
		end

feature --update status bar
	msg_status_update (xyz: STRING; fuel: INTEGER; life: INTEGER; landed: BOOLEAN) : STRING
			--update when status is clicked
		do
			create Result.make_from_string ("  Explorer status report:")
			if not landed then --if not landed
				Result.append ("Traveling at cruise speed at ")
			else --if landed
				Result.append ("Stationary on planet surface at ")
			end
			Result.append (xyz)
			Result.append ("%N  Life units left:" + life.out + ", Fuel units left:" + fuel.out)
		end

feature --move messages
	msg_cannot_move_area_full : STRING
			--sector is full so can't move there
		do
			Result := "  Cannot transfer to new location as it is full."
		end

	msg_currently_landed (location: STRING): STRING
			--cannot move, currently landed
		do
			Result := "  Negative on that request:you are currently landed at Sector:" + location
		end

feature --land/liftoff messages
	msg_no_unvisited_planet (location: STRING) : STRING
		do
			Result := "  Negative on that request:no unvisited attached planet at Sector:" + location
		end

	msg_no_yellow_dwarf (location: STRING) : STRING
			--no yellow dwarf in this area so cannot land
		do
			Result := "  Negative on that request:no yellow dwarf at Sector:" + location
		end

	msg_no_planet_to_land (location: STRING) : STRING
			--no planet to land on
		do
			Result := "  Negative on that request:no planets at Sector:" + location
		end

	msg_already_landed (location: STRING) : STRING
			--if try to land when already landed
		do
			Result := "  Negative on that request:already landed on a planet at Sector:" + location
		end

	msg_not_on_planet (location: STRING) : STRING
			--when try to lift off when not on planet
		do
			Result := "  Negative on that request:you are not on a planet at Sector:" + location
		end

	msg_lift_off (location: STRING) : STRING
			--lift of from a planet
		do
			Result := "  Explorer has lifted off from planet at Sector:" + location
		end
end

package raindrops

import "strconv"



func Convert(input int) string {

	raindrops := ""
	if input % 3 == 0 { raindrops += "Pling" }
	if input % 5 == 0 { raindrops += "Plang" }
	if input % 7 == 0 { raindrops += "Plong" }
	
	if len(raindrops) == 0 { return strconv.Itoa(input) }
	return raindrops
}

package space


type Planet string


func Age(seconds float64, planet Planet) float64 {

	yearInSeconds := float64(31557600)
	switch planet {
		case "Mercury":
			return seconds / (yearInSeconds * 0.2408467)
		case "Venus":
			return seconds / (yearInSeconds * 0.61519726)
		case "Mars":
			return seconds / (yearInSeconds * 1.8808158)
		case "Jupiter":
			return seconds / (yearInSeconds * 11.862615)
		case "Saturn":
			return seconds / (yearInSeconds * 29.447498)
		case "Uranus":
			return seconds / (yearInSeconds * 84.016846)
		case "Neptune":
			return seconds / (yearInSeconds * 164.79132)
		default: // Earth
			return seconds / yearInSeconds
	}
}
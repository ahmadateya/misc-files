package romannumerals

func ToRomanNumeral(num int) (string, bool) {

	if num <= 0 || num > 3000{
		return "", true
	}

	values := []int{
		1000, 900, 500, 400,
		100, 90, 50, 40,
		10, 9, 5, 4, 1,
	}
	symbols := []string{
		"M", "CM", "D", "CD",
		"C", "XC", "L", "XL",
		"X", "IX", "V", "IV",
		"I",
	}
		
	roman := ""
	i := 0
	
	for num > 0 {
		// calculate the number of times this num is completly divisible by values[i]
		// times will only be > 0, when num >= values[i]
		k := num / values[i]
		for j := 0; j < k; j++ {
			//buildup roman numeral
			roman += symbols[i]
			//reduce the value of num.
			num -= values[i]
		}
		i++
	}
	return roman, false
}
package luhn

import (
	"strconv"
	"strings"
)


func Valid(sequence string) bool {

	sequence = strings.Replace(sequence, " ", "", -1)
	
	if len(sequence) <= 1 {
		return false
	}

	sequence = Reverse(sequence)

	sum := 0
	for i, r := range sequence {
		num, err := strconv.Atoi(string(r))

		if err != nil {
			return false
		}

		if (i % 2) == 1 {
			num *= 2
			if num > 9 {
				num -= 9
			}
		}
		sum += int(num)
	}

	return (sum % 10) == 0
}

func Reverse(s string) string {
    runes := []rune(s)
    for i, j := 0, len(runes)-1; i < j; i, j = i+1, j-1 {
        runes[i], runes[j] = runes[j], runes[i]
    }
    return string(runes)
}
package isogram

import (
	"regexp"
	"strings"
)

func IsIsogram(input string) bool {
	input = strings.ToLower(input)

	// a regex to detect white space and dashes
	reg, _ := regexp.Compile(`[ -]`) 
	input = reg.ReplaceAllString(input, "")
	
	for _, char := range input {
		charCount := strings.Count(input, string(char))
		if charCount > 1 { return false }		
	}
	return true
}
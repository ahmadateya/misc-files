// This is a "stub" file.  It's a little start on your solution.
// It's not a complete solution though; you have to write some code.

// Package bob should have a package comment that summarizes what it's about.
// https://golang.org/doc/effective_go.html#commentary
package bob

import (
	"strings"
	"unicode"
)

func HasLetters(s string) bool {
	for _, r := range s {
		if unicode.IsLetter(r) {
			return true
		}
	}
	return false
}


func Hey(remark string) string {

	cleanedRemark := strings.TrimFunc(remark, func(r rune) bool {
		return unicode.IsSpace(r) || unicode.IsControl(r)
	})

	yelling := HasLetters(cleanedRemark) && strings.Contains(cleanedRemark, strings.ToUpper(cleanedRemark))
	asking := strings.HasSuffix(cleanedRemark, "?")

	response := "Whatever."
	switch {
	case yelling && asking:
		response = "Calm down, I know what I'm doing!"
	case yelling:
		response = "Whoa, chill out!"
	case asking:
		response = "Sure."
	case len(cleanedRemark) == 0:
		response = "Fine. Be that way!"
	}
	return response
}

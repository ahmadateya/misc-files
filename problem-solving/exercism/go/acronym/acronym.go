// This is a "stub" file.  It's a little start on your solution.
// It's not a complete solution though; you have to write some code.

// Package acronym should have a package comment that summarizes what it's about.
// https://golang.org/doc/effective_go.html#commentary
package acronym

import (
	"regexp"
	"strings"
	"unicode"
)


func Abbreviate(s string) string {

	reg, _ := regexp.Compile("[^a-zA-Z']+")
    s = reg.ReplaceAllString(s, " ")

	stringSlice := strings.Split(s, " ")

	var acronym []string;
	for _, word := range stringSlice {
		if unicode.IsLetter(rune(word[0])) {
			acronym = append(acronym, strings.ToUpper(string(word[0])))
		}
	}
	return strings.Join(acronym, "")
}

package wordcount

import (
	"regexp"
	"strings"
)


type Frequency map[string]int

func WordCount(phrase string) Frequency {
	f := make(Frequency)
	// to exclude all special characters except the single qoute inside a word
	wordPat := regexp.MustCompile("[a-zA-Z0-9]+(['][a-zA-Z0-9]+)?") 
	for _, word := range wordPat.FindAllString(phrase, -1) {
		word = strings.ToLower(word)
		f[word]++
	}
	return f
}
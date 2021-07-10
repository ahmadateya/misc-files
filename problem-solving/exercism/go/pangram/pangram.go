package pangram

import (
	"strings"
)

func alphabet() []string {
	lowercase := "abcdefghijklmnopqrstunwxyz"
	var alphabet []string
    for _, c := range lowercase {
       alphabet = append(alphabet, string(c))
    }
	return alphabet
}

func IsPangram(sentence string) bool {
	sentence = strings.ToLower(sentence)
	sentence = strings.Replace(sentence, " ", "", -1)
	if len(sentence) < 26 {
		return false
	}
	alphabet := alphabet()
	var IsPangramSlice []bool
	for _, letter := range alphabet {
		IsPangramSlice = append(IsPangramSlice, strings.ContainsAny(sentence, letter)) 
	}

    for _, item := range IsPangramSlice {
        if item == bool(false) {
            return false
        }
    }
    return true
}
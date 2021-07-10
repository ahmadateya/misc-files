package etl

import "strings"


func Transform(m map[int][]string) map[string]int {

	r := make(map[string]int)

	for mk, mv := range m {
		for _, sv := range mv {
			r[strings.ToLower(string(sv))] = mk
		}
	}
	return r
} 
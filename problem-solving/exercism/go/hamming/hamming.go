package hamming

import "errors"

func Distance(a, b string) (int, error) {

	counter := 0
	if len(a) != len(b) {
		return counter, errors.New("NOT EQUAL")
	}
	for i := range a {
		if a[i] != b[i] {
			counter++
		}
	}
	return counter, nil
}

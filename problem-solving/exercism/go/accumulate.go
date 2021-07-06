package accumulate


func Accumulate(s []string, f func(string) string) []string {
	var newSlice []string
	for _, item := range s {
		newSlice = append(newSlice, f(item))
	}
	return newSlice
}
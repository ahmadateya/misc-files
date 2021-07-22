package letter

// FreqMap records the frequency of each rune in a given text.
type FreqMap map[rune]int

// Frequency counts the frequency of each rune in a given text and returns this
// data as a FreqMap.
func Frequency(s string) FreqMap {
	m := FreqMap{}
	for _, r := range s {
		m[r]++
	}
	return m
}

func ConcurrentFrequency(ss []string)FreqMap {
	freqChannel := make(chan FreqMap, len(ss))

	for _, s := range ss {
		go func(s string) {
			freqChannel <- Frequency(s)
		}(s)
	}

	m := make(FreqMap)
	for range ss {
		for letter, freq := range <-freqChannel {
			m[letter] += freq
		}
	}
	return m
}
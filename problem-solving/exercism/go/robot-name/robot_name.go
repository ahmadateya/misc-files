package robotname

import (
	"math/rand"
	"strconv"
	"time"
)

/* 
	didnt implement the Bonus exercise
*/
type Robot struct {
	name   string
}

func (r *Robot) Name() (string, error) {
	if r.name != "" {
		return r.name, nil
	}
	r.name = randString(2)+strconv.Itoa(randNumber(3))
	return r.name, nil
}

func (r *Robot) Reset() {
	r.name = ""
}

func randNumber(n int) int {
	rand.Seed(time.Now().UnixNano())
    min := 100
    max := 999
	return rand.Intn(max-min) + min
}

/* 
  n is the number of letters that you want random
*/
func randString(n int) string {
	rand.Seed(time.Now().UnixNano())
	letters := []rune("ABCDEFGHIJKLMNOPQRSTUVWXYZ")
    b := make([]rune, n)
    for i := range b {
        b[i] = letters[rand.Intn(len(letters))]
    }
    return string(b)
}

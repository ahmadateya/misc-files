package clock

import (
	"fmt"
	"time"
)


type Clock struct {
	Hour   int
	Minute int
}

func New(hour int, minute int) Clock {
	d := dateHelper(hour, minute)
	return Clock{Hour: d.Hour(), Minute: d.Minute()}
}

func (c Clock) String() string {
	d := dateHelper(c.Hour, c.Minute)
	return fmt.Sprintf("%02d:%02d", d.Hour(), d.Minute())
}

func (c Clock) Add(minutes int) Clock {
	d := dateHelper(c.Hour, c.Minute)
	d = d.Add(time.Duration(minutes) * time.Minute)
	c.Hour, c.Minute, _ = d.Clock()
	return c
}

func (c Clock) Subtract(minutes int) Clock {
	return c.Add(-minutes)
}

func dateHelper(hour int, minute int) time.Time {
	return time.Date(0, 0, 0, hour, minute, 0, 0, time.Local)
}
package triangle

import (
	"math"
	"sort"
)

// this man solution https://exercism.io/tracks/go/exercises/triangle/solutions/3500037ba2f64a39b2da9d8a15cfce11

type Kind int

const (
	// NaT = not a triangle
	NaT Kind = iota
	// Equ = equilateral
	Equ
	// Iso = isosceles
	Iso
	// Sca = scalene
	Sca
)

func KindFromSides(a, b, c float64) Kind {
	
	sides := [3]float64{a, b, c} 
	sort.Float64s(sides[:]) // sorting the set will save a lot of effort

	// sides must have valid lengths
	for _, f := range sides {
		if f <= 0 || math.IsNaN(f) || math.IsInf(f, 0) {
			return NaT
		}
	}

	// enforce triangle inequality
	if sides[0]+sides[1] < sides[2] {
		return NaT
	}

	if sides[0] == sides[1] && sides[0] == sides[2] {
		return Equ
	}

	if sides[0] == sides[1] || sides[1] == sides[2] {
		return Iso
	}

	return Sca
}
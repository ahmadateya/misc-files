package diffsquares

func SquareOfSum(n int) int {
	/* 
	 * triangular number => a formula to find the sum of n natural number
	 * formula => (n * (n + 1)) / 2
	 * see: https://en.wikipedia.org/wiki/Triangular_number
	*/
	sum := (n * (n + 1)) / 2 
	return sum * sum // or  n * n * (n*n + 2*n + 1) / 4
	/* Brute force solution
		squareOfSum := 0
		for i := 1; i <= n; i++ {
			squareOfSum += i
		}
		return int(math.Pow(float64(squareOfSum), 2.0))
	*/
}


func SumOfSquares(n int) int {
	/* 
	 * Square pyramidal number (Sum of Squares) => a formula to find the sum of squares of n natural number
	 * formula => n * (n + 1) * (2*n + 1) / 6
	 * See: https://en.wikipedia.org/wiki/Square_pyramidal_number
	*/

	/*
	 	sumOfSquares := 0
		for i := 1; i <= n; i++ {
			sumOfSquares += int(math.Pow(float64(i), 2.0))
		}
		return sumOfSquares
	*/
	return n * (n + 1) * (2*n + 1) / 6
}

func Difference(num int) int {
	return SquareOfSum(num) - SumOfSquares(num)
}

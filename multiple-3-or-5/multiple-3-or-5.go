package kata

func ProgSum(n int) int {
	return n * (n + 1) / 2
}

func AmountOfDivisionsInRange(number, n int) int {
	res := number / n
	if number%n == 0 {
		res -= 1
	}
	return res
}

func Multiple3And5(number int) int {
	return 3*ProgSum(AmountOfDivisionsInRange(number, 3)) + 5*ProgSum(AmountOfDivisionsInRange(number, 5)) - 15*ProgSum(AmountOfDivisionsInRange(number, 15))
}

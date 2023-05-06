package kata

func PositiveSum(numbers []int) int {
	sum := 0
	for _, cur := range numbers {
		if cur > 0 {
			sum += cur
		}
	}
	return sum
}

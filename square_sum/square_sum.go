package kata

func SquareSum(numbers []int) int {
	var sum int = 0
	for _, num := range numbers {
		sum += num * num
	}
	return sum
}

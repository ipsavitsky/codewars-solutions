package kata

// https://www.codewars.com/kata/515e271a311df0350d00000f
func SquareSum(numbers []int) int {
	var sum int = 0
	for _, num := range numbers {
		sum += num * num
	}
	return sum
}

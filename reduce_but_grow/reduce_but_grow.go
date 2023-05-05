package kata

// https://www.codewars.com/kata/57f780909f7e8e3183000078/
func Grow(arr []int) int {
	multiplication := 1

	for _, element := range arr {
		multiplication *= element
	}

	return multiplication
}

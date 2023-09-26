package kata

func Grow(arr []int) int {
	multiplication := 1

	for _, element := range arr {
		multiplication *= element
	}

	return multiplication
}

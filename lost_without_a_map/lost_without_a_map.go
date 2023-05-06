package kata

func Maps(x []int) []int {
	res := make([]int, len(x))
	for i := 0; i < len(x); i++ {
		res[i] = x[i] * 2
	}
	return res
}

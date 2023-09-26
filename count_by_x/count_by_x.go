package kata

func CountBy(x, n int) []int {
	res := make([]int, n)
	sum := x
	for i := 0; i < n; i++ {
		res[i] = sum;
		sum += x
	}
	return res
}

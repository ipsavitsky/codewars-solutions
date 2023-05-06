package kata

func Trib(signature [3]float64) chan float64 {
	ch := make(chan float64)
	go func() {
		for true {
			k := signature[0] + signature[1] + signature[2]
			signature[0] = signature[1]
			signature[1] = signature[2]
			signature[2] = k
			ch <- k
		}
	}()
	return ch
}

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}

func Tribonacci(signature [3]float64, n int) []float64 {
	res := signature[:min(3, n)]
	trib_gen := Trib(signature)
	for i := 3; i < n; i++ {
		res = append(res, <-trib_gen)
	}
	return res
}

package kata

func Xbon(signature []int) chan int {
	ch := make(chan int)
	go func() {
		for true {
			k := 0
			for _, cur := range signature {
				k += cur
			}
			for i := 0; i < len(signature)-1; i++ {
				signature[i] = signature[i+1]
			}
			signature[len(signature)-1] = k
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

func Xbonacci(signature []int, n int) []int {
	res := make([]int, min(len(signature), n))
	copy(res, signature)
	xbon_gen := Xbon(signature)
	for i := len(signature); i < n; i++ {
		res = append(res, <-xbon_gen)
	}
	return res
}

package kata

// https://www.codewars.com/kata/54ff3102c1bad923760001f3
func GetCount(str string) (count int) {
	vowels := [5]rune{'a', 'e', 'i', 'o', 'u'}

	for _, character := range str {
		for _, vowel := range vowels {
			if character == vowel {
				count += 1
				break
			}
		}
	}

	return count
}

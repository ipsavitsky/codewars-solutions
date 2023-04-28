package kata

// https://www.codewars.com/kata/5a3fe3dde1ce0e8ed6000097
func century(year int) int {
	if year%100 == 0 {
		return year / 100
	} else {
		return year/100 + 1
	}
}

package kata

// https://www.codewars.com/kata/5aa736a455f906981800360d
func Feast(beast string, dish string) bool {
	return (beast[0] == dish[0]) && (beast[len(beast)-1] == dish[len(dish)-1])
}

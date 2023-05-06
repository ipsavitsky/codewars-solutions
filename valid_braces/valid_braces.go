package kata

type stack []rune

func (s stack) Push(v rune) stack {
	return append(s, v)
}

func (s stack) Top() rune {
	length := len(s)
	return s[length-1]
}

func (s stack) Pop() stack {
	length := len(s)
	return s[:length-1]
}

func (s stack) Empty() bool {
	return len(s) == 0
}

func ValidBraces(str string) bool {
	r_bracket_pairs := map[rune]rune{
		')': '(',
		']': '[',
		'}': '{',
	}
	stack := make(stack, 0)
	for _, s := range str {
		switch s {
		case '(', '[', '{':
			stack = stack.Push(s)
		case ')', ']', '}':
			if stack.Empty() || stack.Top() != r_bracket_pairs[s] {
				return false
			}
			stack = stack.Pop()
		}
	}
	return stack.Empty()
}

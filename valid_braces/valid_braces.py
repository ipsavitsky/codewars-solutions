"""https://www.codewars.com/kata/5277c8a221e209d3f6000b56"""
def valid_braces(string: str) -> bool:
    R_BRACKET_PAIRS = {
        ')': '(',
        ']': '[',
        '}': '{'
    }
    stack = []
    for s in string:
        match s:
            case '(' | '[' | '{' as brace:
                stack.append(brace)
            case ')' | ']' | '}' as rbrace:
                if len(stack) == 0 or stack.pop() != R_BRACKET_PAIRS[rbrace]:
                    return False
    return len(stack) == 0

print(valid_braces("[(])"))
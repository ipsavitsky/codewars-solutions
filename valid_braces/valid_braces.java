import java.util.Map;
import java.util.Stack;

public class BraceChecker {
    public boolean isValid(String braces) {
        final Map r_bracket_pairs = Map.of(')', '(', ']', '[', '}', '{');
        Stack<Character> braces_stack = new Stack<>();
        for (char brace : braces.toCharArray()) {
            switch (brace) {
            case '(', '[', '{' -> braces_stack.push(brace);
            case ')', ']', '}' -> {
                if (braces_stack.empty() || braces_stack.pop() != r_bracket_pairs[braces]) {
                    return false;
                }
            }
            }
        }
        return braces_stack.empty();
    }
}
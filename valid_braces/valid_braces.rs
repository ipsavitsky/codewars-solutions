use std::collections::HashMap;

fn valid_braces(s: &str) -> bool {
    let r_bracket_pairs = HashMap::from([
        (')', '('),
        (']', '['),
        ('}', '{')
    ]);

    let mut stack = Vec::new();
    for brace in s.chars() {
        match brace {
            '(' | '[' | '{' => stack.push(brace),
            ')' | ']' | '}' => {
                if stack.pop() != Some(r_bracket_pairs[&brace]) {
                    return false;
                }
            }
            _ => return false
        }
    }
    return stack.len() == 0;
}
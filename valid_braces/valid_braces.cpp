#include <stack>
#include <string>
#include <unordered_map>

bool valid_braces(std::string braces) {
    const std::unordered_map<char, char> r_bracket_pairs = {
        {')', '('}, {']', '['}, {'}', '{'}};
    std::stack<char> braces_stack;
    for (char brace : braces) {
        switch (brace) {
        case '(':
        case '[':
        case '{':
            braces_stack.push(brace);
            break;
        case ')':
        case ']':
        case '}':
            if (braces_stack.empty() ||
                braces_stack.top() != r_bracket_pairs.at(brace))
                return false;
            braces_stack.pop();
            break;
        }
    }
    return braces_stack.empty();
}
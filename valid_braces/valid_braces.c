#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

struct stack {
    char *data;
    size_t size;
    size_t capacity;
};

struct stack stack_init(size_t capacity) {
    struct stack res;
    res.data = (char *)malloc(capacity * sizeof(char));
    res.capacity = capacity;
    res.size = 0;
    return res;
}

void stack_deinit(struct stack *stack) { free(stack->data); }

void stack_push(struct stack *stack, char element) {
    stack->data[(stack->size)++] = element;
}

char stack_pop(struct stack *stack) {
    char res = stack->data[--(stack->size)];
    return res;
}

bool stack_empty(struct stack *stack) { return stack->size == 0; }

char r_bracket_pairs(char r_bracket) {
    switch (r_bracket) {
    case ')':
        return '(';
    case ']':
        return '[';
    case '}':
        return '{';
    default:
        return 0;
    }
}

bool valid_braces(const char *braces) {
    struct stack st = stack_init(strlen(braces));
    for (size_t i = 0; i < strlen(braces); ++i) {
        switch (braces[i]) {
        case '(':
        case '[':
        case '{':
            stack_push(&st, braces[i]);
            break;
        case ')':
        case ']':
        case '}':
            if (stack_empty(&st) ||
                stack_pop(&st) != r_bracket_pairs(braces[i])) {
                return false;
            }
        }
    }
    bool emptyness = stack_empty(&st);
    stack_deinit(&st);
    return emptyness;
}

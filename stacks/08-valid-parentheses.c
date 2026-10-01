#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Push opening brackets and require each closer to match the stack top. */
bool isValid(char *s) {
    size_t length = strlen(s);
    char *stack = malloc(length * sizeof(*stack));
    if (length > 0 && stack == NULL) {
        return false;
    }

    size_t stackSize = 0;
    for (size_t index = 0; index < length; index++) {
        char character = s[index];
        if (character == '(' || character == '[' || character == '{') {
            stack[stackSize++] = character;
        } else {
            if (stackSize == 0) {
                free(stack);
                return false;
            }
            char opening = stack[--stackSize];
            if ((character == ')' && opening != '(') ||
                (character == ']' && opening != '[') ||
                (character == '}' && opening != '{')) {
                free(stack);
                return false;
            }
        }
    }

    bool valid = stackSize == 0;
    free(stack);
    return valid;
}

int main(void) {
    assert(isValid("()[]{}"));
    assert(!isValid("(]"));
    assert(isValid(""));

    puts("Valid Parentheses: all tests passed");
    return 0;
}
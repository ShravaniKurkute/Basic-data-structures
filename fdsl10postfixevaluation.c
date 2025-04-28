#include <stdio.h>

int stack[100];
int top = -1;

void push(int value) {
    stack[++top] = value;
}

int pop() {
    return stack[top--];
}

int isDigit(char ch) {
    return (ch >= '0' && ch <= '9');
}

int evaluatePostfix(char expr[]) {
    int i = 0;
    while (expr[i] != '\0') {
        char ch = expr[i];

        if (isDigit(ch)) {
            push(ch - '0'); // Convert char digit to int
        } else {
            int b = pop();
            int a = pop();
            int result;

            if (ch == '+') result = a + b;
            else if (ch == '-') result = a - b;
            else if (ch == '*') result = a * b;
            else if (ch == '/') result = a / b;

            push(result);
        }
        i++;
    }

    return pop(); // Final result
}

int main() {
    char expr[100];

    printf("Enter postfix expression: ");
    scanf("%s", expr);

    int result = evaluatePostfix(expr);
    printf("Result: %d\n", result);

    return 0;
}

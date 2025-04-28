#include<stdio.h>
#include<string.h>
#define max 10
char stack[max];
int top=-1;

void push(char c)
{
    if(top==max-1)
    {
        printf("Stack overflow\n");
    }
    else{
        top++;
        stack[top]=c;
    }
}

char pop()
{
    if(top==-1){
        return '\0';
    }
    else{
        return stack[top--];
    }
}

int main()
{
    char expr[max];
    int balance=1;
    printf("Enter the expression of brackets: ");
    scanf("%s",expr);
    for (int i = 0; i < strlen(expr); i++) {
        char c = expr[i];
        if (c == '{' || c == '[' || c == '(') {
            push(c);
        } else if (c == '}' || c == ']' || c == ')') {
            char topchar = pop();
            if ((topchar == '\0') ||
                (c == ')' && topchar != '(') ||
                (c == ']' && topchar != '[') ||
                (c == '}' && topchar != '{')) {
                balance = 0;
                break;
            }
        }
    }
    if(balance)
    {
        printf("Well formed expression\n");
    }
    else{
        printf("Not well formed expression\n");
    }
    return 0;
}
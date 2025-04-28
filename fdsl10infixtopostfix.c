#include<stdio.h>
#include<string.h>

char stack[20];
int top=-1;

void push(char x)
{
    stack[++top]=x;
}

char pop(){
    return stack[top--];
}

int precedence(char c){
    if(c=='+'||c=='-')
    return 1;
    if(c=='*'||c=='/')
    return 2;
    if(c=='^')
    return 3;
    else return -1;
}

int main(){
    int i;
    char a[20],c,x;
    printf("Enter the infix expression: ");
    gets(a);
    printf("The postfix expression is: ");
    for(i=0;a[i]!='\0';i++){
        c=a[i];
        if(precedence(c)>0)
        {
            while(top!=-1 && precedence(stack[top])>=precedence(c))
            {
                printf("%c",pop());
            }
            push(c);
        }
        else if(c==')')
        {
            x=pop();
            while(x!='(')
            {
                printf("%c",x);
                x=pop();
            }
        }

    else if(c=='(')
    {
        push(c);
    }
    else{
        printf("%c",c);
    }
    }
    for(i=0;i<=top+1;i++){
        printf("%c",pop());
    }
    return 0;
}
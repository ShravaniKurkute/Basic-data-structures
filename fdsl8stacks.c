#include<stdio.h>

#define max 10
int a[max],top=-1;

void push(int element)
{
    if(top==max-1){
        printf("Stack overflow\n");
        return;
    }
    top++;
    printf("Enter element: ");
    scanf("%d",&element);
    a[top]=element;
    printf("The element pushed at %d position is %d\n",top,a[top]);
}

void isempty()
{
    if(top==-1){
        printf("Stack is empty\n");
        return;
    }
}

void pop(){
    if(top==-1){
        printf("Stack underflow\n");
        return;
        printf("The element popped at %d position %d\n",top,a[top]);
        top--;
    }
}

void display()
{
    isempty();
    {
        for(int i=top;i>=0;i--)
        {
            printf("Position : %d and element: %d\n",i,a[i]);
        }
    }
}
int main() {
    int ch, element;
    while(1)
    {
    printf("1.push(element)\n2.pop()\n3.display\n4.exit\n");
    printf("enter your choice");
    scanf("%d",&ch);
    
    switch(ch)
    {
        case 1: 
        push(element);
        break;
        case 2: 
        pop();
        break;
        case 3:
        display();
        break;
        case 4:
        printf("exit");
        return 0;
        default:
        printf("invalid choice");
    }
    }
    return 0;
}

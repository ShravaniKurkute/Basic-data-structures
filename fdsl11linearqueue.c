#include<stdio.h>
#define max 5
int rear=-1,front=-1;
int arr[10];

void enqueue(int a)
{
    if(rear==max-1)
    {
        printf("Queue is full\n");
    }
    else{
        rear++;
        arr[rear]=a;
    }
}

void dequeue()
{
    if(rear==front)
    {
        printf("Queue is empty\n");
    }
    else{
        front++;
        printf("%d is deleted\n",arr[front]);
    }
}

void display()
{
    if(front==-1&&rear==-1||front ==rear)
    {
        printf("Queue is empty\n");
    }
    else{
        for(int i=front+1;i<rear+1;i++)
        {
            printf("%d ",arr[i]);
        }
    }
}

int main()
{
    int ch,n,j;
    while(1)
    {
        printf("Enter your choice:\n1.enQueue\n2.deQueue\n3.Display\n4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:{
                printf("Enter element to enqueue: ");
                scanf("%d",&n);
                enqueue(n);
                break;
            }
            case 2:{
                dequeue();
                break;
            }

            case 3:{
                display();
                break;
            }
            case 4:{
                printf("Exit\n");
                return 0;
            }
            default:{
                printf("Invalid choice\n");
            }
        }
    }
    return 0;
}
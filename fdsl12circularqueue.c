#include <stdio.h>
#define max 5

int front = -1, rear = -1;
int arr[max];

void enqueue(int a) {
    if ((rear + 1) % max == front) {
        printf("Queue is full\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % max;
        arr[rear] = a;
    }
}

void dequeue() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("%d is deleted\n", arr[front]);
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % max;
        }
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        int i = front;
        printf("Queue elements: ");
        do {
            printf("%d ", arr[i]);
            i = (i + 1) % max;
        } while (i != (rear + 1) % max);
        printf("\n");
    }
}

int main() {
    int ch, n;
    while (1) {
        printf("Enter your choice:\n1.enQueue\n2.deQueue\n3.Display\n4.Exit\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("Enter element to enqueue: ");
                scanf("%d", &n);
                enqueue(n);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exit\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
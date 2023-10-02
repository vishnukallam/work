#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int queue[MAX],  front = -1,rear = -1;
void enqueue(int data) {
    if (rear == MAX - 1) {
        printf("Queue overflow!\n");
    }
    if (front == -1 && rear == -1) {
        front = rear = 0;
    } else {
        rear++;
    }
    queue[rear] = data;
}
void dequeue() {
    if (front == -1) {
        printf("Queue underflow!\n");
    }    
    printf("Dequeued element: %d\n", queue[front]);
    if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
}
void display() {
    if (front == -1) {
        printf("Queue is empty!\n");
    }
    printf("Queue elements are:\n");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
}
int main() {
    int choice, data;
    while (1) {
        printf("\n\n*** Queue Menu ***\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter data to enqueue: ");
                scanf("%d", &data);
                enqueue(data);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice!\n");
                break;
        }
    }
    return 0;
}
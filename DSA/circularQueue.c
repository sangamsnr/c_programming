#include<stdio.h>
#define N 5

int queue[N];
int front = -1, rear = -1;

// Enqueue function
void enqueue() {
    int data;
    printf("Enter the element:\n");
    scanf("%d", &data);

    if (((rear + 1) % N) == front) {
        printf("\nQueue overflow!\n");
    } 
    else if (front == -1 && rear == -1) { 
        front = rear = 0;
        queue[rear] = data;
    } 
    else {
        rear = (rear + 1) % N;
        queue[rear] = data;
    }
}

// Dequeue function
void dequeue() {
    if (front == -1 && rear == -1) {
        printf("\nQueue underflow!\n");
    } 
    else if (front == rear) {
        printf("\nThe dequeued element is: %d\n", queue[front]);
        front = rear = -1; // Reset queue
    } 
    else {
        printf("\nThe dequeued element is: %d\n", queue[front]);
        front = (front + 1) % N;
    }
}

// Display function
void display() {
    if (front == -1 && rear == -1) {
        printf("\nQueue is empty!\n");
        return;
    }

    int i = front;
    printf("\nQueue elements:\n");
    while (i != rear) {
        printf("queue[%d]: %d\n", i, queue[i]);
        i = (i + 1) % N;
    }
    printf("queue[%d]: %d\n", i, queue[rear]); // Print last element
}

int main() {
    int choice;
    do {
        printf("\nEnter your choice:\n1 = Enqueue\n2 = Dequeue\n3 = Display\n0 = Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 0:
                printf("EXIT\n");
                break;
            default:
                printf("INVALID CHOICE\n");
        }
    } while (choice != 0);

    return 0;
}

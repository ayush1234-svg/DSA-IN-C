#include <stdio.h>

int front = -1, rear = -1, a[10], n = 10;

void enqueue(int ele) {
    if (rear == n - 1) {
        printf("\nQueue is full");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        a[rear] = ele;
        printf("Element inserted %d at position %d\n", a[rear], rear);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("\nQueue is empty");
    } else {
        printf("\nElement popped = %d", a[front]);
        front++;
        if (front > rear) {
            // Reset queue
            front = rear = -1;
        }
    }
}

void printqueue() {
    if (front == -1 || front > rear) {
        printf("\nQueue is empty");
        return;
    }
    printf("\nQueue contents:\n");
    for (int i = front; i <= rear; i++) {
        printf("%d\n", a[i]);
    }
}

int main() {
    int ele, c, j;

    while (1) {
        printf("\n1.Enqueue\n2.Dequeue\n3.Print\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &c);

        switch (c) {
            case 1:
                do {
                    printf("\nEnter the element for enqueue = ");
                    scanf("%d", &ele);
                    enqueue(ele);
                    printf("\nENTER 1 TO CONTINUE, 0 TO STOP = ");
                    scanf("%d", &j);
                } while (j == 1);
                break;

            case 2:
                do {
                    dequeue();
                    printf("\nENTER 1 TO CONTINUE, 0 TO STOP = ");
                    scanf("%d", &j);
                } while (j == 1);
                break;

            case 3:
                printqueue();
                break;

            case 4:
                printf("\nExiting!\n");
                return 0;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    }

    return 0;
}

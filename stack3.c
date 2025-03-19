#include <stdio.h>

void push(int a[], int n, int *top) {
    if (*top >= n - 1) {  
        printf("\nSTACK OVERFLOW! No more elements can be pushed.\n");
        return;
    }

    int ele;
    (*top)++;  
    printf("\nENTER ELEMENT TO PUSH AT POSITION %d: ", *top);
    scanf("%d", &ele);
    a[*top] = ele;
    printf("ELEMENT %d PUSHED AT POSITION %d\n", ele, *top);
}

void pop(int a[], int *top) {
    if (*top == -1) {
        printf("\nSTACK IS EMPTY! No elements to pop.\n");
        return;
    }

    printf("\nPOPPED ELEMENT = %d FROM POSITION %d\n", a[*top], *top);
    (*top)--;
}

void printStack(int a[], int top) {
    if (top == -1) {
        printf("\nSTACK IS EMPTY\n");
        return;
    }

    printf("\nSTACK ELEMENTS (TOP TO BOTTOM):\n");
    for (int i = top; i >= 0; i--) {  
        printf("POSITION %d = %d\n", i, a[i]);
    }
}

int main() {
    int a[10], top = -1, n, choice;

    printf("ENTER SIZE OF STACK (MAX 10) = ");
    scanf("%d", &n);

    if (n > 10 || n <= 0) {  
        printf("INVALID SIZE! ENTER A NUMBER BETWEEN 1 AND 10.\n");
        return 1;
    }

   
    int j;
    do {
        push(a, n, &top);
        printf("\nENTER 1 TO CONTINUE PUSHING, 0 TO STOP = ");
        scanf("%d", &j);
    } while (j == 1);

    while (1) {
        printf("\nCHOOSE AN OPERATION:\n");
        printf("1. PUSH \n");
        printf("2. POP \n");
        printf("3. DISPLAY STACK\n");
        printf("4. EXIT\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                do {
                    push(a, n, &top);
                    printf("\nENTER 1 TO CONTINUE PUSHING, 0 TO STOP = ");
                    scanf("%d", &j);
                } while (j == 1);
                break;

            case 2: 
                do {
                    pop(a, &top);
                    printf("\nENTER 1 TO CONTINUE POPPING, 0 TO STOP = ");
                    scanf("%d", &j);
                } while (j == 1);
                break;

            case 3:
                printStack(a, top);
                break;

            case 4:
                printf("\nEXITING PROGRAM.\n");
                return 0;

            default:
                printf("\nINVALID CHOICE! TRY AGAIN.\n");
        }
    }

    return 0;
}

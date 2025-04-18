#include <stdio.h>

int a[10], top = -1;


void push(int rem) {
    if (top < 9) { 
        top++;
        a[top] = rem;
    } 
}


void pop() {
    for (int i = top; i >= 0; i--) {
        printf("%d", a[i]);
    }
    printf("\n");
}


void deci_bi(int num) {
    int rem;
    while (num > 0) {
        rem = num % 2;   
        push(rem);       
        num /= 2;        
    }
}

int main() {
    int num;
    printf("ENTER NUMBER FOR BINARY CONVERSION = ");
    scanf("%d", &num);
    
    if (num == 0) {
        printf("0\n");
    } else {
        deci_bi(num);    
        pop();           
    }

    return 0;
}

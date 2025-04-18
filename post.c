#include<stdio.h>
int arr[10],size = 10 ,top =-1;
void push(int a){
    if(top == size -1){
        printf("\nSTACK OVERFLOW");
    }else{
        top++;
        arr[top] = a;
    }
}
int pop(){
    if(top == -1){
        printf("\nSTACK EMPTY");
    }else{
        return arr[top--];
    }
}
void printres(){
    printf("THE EVALUATION  = %d",arr[top]);
}
int main(){
    char str[10];
    int op1 ,op2,ans;
    printf("ENTER STRING = ");
    scanf("%s",str);
    for(int i = 0 ; str[i] != '\0' ; i++){
        if(str[i] != '+' && str[i] != '-' && str[i] != '*' && str[i] != '/' && str[i] != '%'){
            push(str[i] - '0');
        }else{
            op1 = pop();
            op2 = pop();
            if(str [i] == '+'){
                ans = op2 + op1;
                push(ans);
            }else if(str [i] == '-'){
                ans = op2 - op1;
                push(ans);
            }else if(str [i] == '*'){
                ans = op2 * op1;
                push(ans);
            }else if(str [i] == '/'){
                ans = op2 / op1;
                push(ans);
            }else if(str [i] == '%'){
                ans = op2 % op1;
                push(ans);
            }else{
                printf("UNEXPECTED STRING");
            }
        }}
        printres();
        

       
    
    return 0;
}
        

#include<stdio.h>
#include<string.h>
char a[10];
int top = -1,size = 10;
void push( char c){
    if(top == size - 1){
        printf("\nSTACK OVERFLOW!");
    }else{
        top++;
        a[top] = c;
    }
}
void pop(){
    if(top == -1){
        printf("\nSTACK EMPTY !");
    }else{
        top--;
    }
}

int main(){
    char str[10];
    int f = 0;
    printf("ENTER STRING FOR PARENTHESIS VALIDATION = ");
    scanf("%s",str);
    for(int i = 0 ; str[i] != '\0' ; i++){
        if(strlen(str)%2 != 0){
            f=0;
            break;
        }
        if(str[i] == '[' || str[i] == '{' || str [i] == '('){
            push(str[i]);
        }else if(str [i] == ']' || str [i] == '}' || str[i] == ')'){
            if(a[top] == '{' && str[i] == '}' ){
                f=1;
                pop();
            }else if(a[top] == '[' && str[i] == ']' ){
                f=1;
                pop();
            }else if(a[top] == '(' && str[i] == ')'){
                f=1;
                pop();
            }else{
                f=0;
                break;
            }
        }else{
            f=0;
            break;
        }}
        if(f == 1){
            printf("VALID STACK!");
        }else{
            printf("INVALID STACK");
        }
    return 0;
}

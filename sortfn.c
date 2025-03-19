 #include<stdio.h>
 void sortfn(int a[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nARRAY AFTER SORTING=");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
 }
 int main(){
    int a[10],n;
    printf("ENTER THE SIZE OF ARRAY=");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\n ENTER ARRAY VALUE AT %d POSITION",i);
        scanf("%d",&a[i]);
    }
    sortfn(a,n);
    return 0;
 }
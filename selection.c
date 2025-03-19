#include<stdio.h>
int main(){
    int arr[10],n,temp;
    printf("ENTER THE SIZE OF ARRAY = ");
    scanf("%d",&n);
    printf("\nENTER %d ARRAY VALUES = ",n);
    for(int i=0;i<n;i++){
        printf("\nENTER VALUE AT %d position = ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
        printf("\n\tPASS NO %d = ",i+1);
        for(int k=0;k<n;k++){
            printf("\t%d",arr[k]);
        }

    }
    printf("\nARRAY AFTER SORTING = ");
    for(int k=0;k<n;k++){
        printf("\t%d",arr[k]);

    } 
    return 0;
}
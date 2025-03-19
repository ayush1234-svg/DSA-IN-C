#include<stdio.h>
int main(){
    int arr[10],n,low=0,high,key,mid,f=0;
    printf("ENTER THE SIZE OF ARRAY = ");
    scanf("%d",&n);
    high = n-1;
    printf("\nENTER %d ARRAY VALUES IN SORTED MANNER= ",n);
    for(int i=0;i<n;i++){
        printf("\nENTER VALUE AT %d position = ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nENTER THE KEY TO SEARCH = ");
    scanf("%d",&key);
    while(low<high){
        mid=(low+high)/2;

        if(key==arr[mid]){
            printf("\nELEMENT FOUND AT INDEX NO %d",mid);
            f=1;
            break;

        }
        else if(key > arr[mid]){
            low=mid+1;
        }
        else {
            high = mid-1;
        }

    }
    if(f==0){
        printf("\nELEMENT NOT FOUND :(");
    }

    return 0;
}
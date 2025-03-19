#include<stdio.h>
int main(){
    int key,temp,i,j,k,arr[5]={16,12,31,23,10};
    int n=5;
    for(int i=1;i<n;i++){
        key=arr[i];
        j=0;
        while(j<i && arr[j]<key){
            j++;
        }
        temp=key;
        for(int k=i;k>j;k--){
            arr[k]=arr[k-1];
        }
        arr[j]=temp;
        printf("\n PASS NO %d = ",i);
        for(int i=0;i<n;i++){
            printf(" %d",arr[i]);
        }
    

    }
    printf("\nARRAY AFTER SORTING = ");
    for(int i=0;i<n;i++){
        printf(" %d",arr[i]);
    }

        
    return 0;
}
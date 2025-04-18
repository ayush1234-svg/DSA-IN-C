#include<stdio.h>
int max = 4 , rear = -1 ,  front  = -1;
int queue[4];
 int  Enqueue(int ele){
    if(rear == -1 && front == -1){
        rear = 0 , front = 0 ;
        queue[rear]  = ele;
    }else if ((rear + 1) % max == front){
        printf("\nQueue full !");
        return 0;
    }else {
        rear = (rear + 1) % max ;
        queue[rear] = ele;
       }

}

void Dequeue(){
    if(rear == -1 && front == -1){
        printf("\nQueue is empty !");

    }else if(rear == front){
        printf("\n%d is deleted",queue[front]);
        rear = -1 , front = -1 ;
    }else{
        printf("\n%d is deleted",queue[front]);
        front = (front + 1) % max; 
    }
}
void display(){
    if(rear == -1 && front == -1){
        printf("\nQueue is empty !");
    } else {
        printf("\nQueue elements are: ");
        int i = front;
        while (1) {
            printf("%d\t", queue[i]);
            if (i == rear)
                break;
            i = (i + 1) % max;
        }
        printf("\n");
    }
}





int main(){
    int choice,c,ele;
    while(1){
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1 : 
            do{
                printf("\nEnter the element  = ");
                scanf("%d",&ele);
                Enqueue(ele);
                printf("\nDo you want to continue enter 1 ?");
                scanf("%d",&c);

            }while(c == 1);
            break;
            case 2 : 
            do{
                Dequeue();
                printf("\nDo you want to continue enter 1 ?");
                scanf("%d",&c);
                


            }while(c == 1);
            break;
            case 3 :
            display();
            break;
            case 4 : 
            printf("\nExiting ...");
            return 0;
          




        }
    }
  






    return 0;
}
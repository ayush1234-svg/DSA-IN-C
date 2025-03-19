#include<stdio.h>
#include<string.h>
 
struct book{
char author[20];
char title[20];
int price;
int code;
};
int main(){
struct book a[10];
int pos;
int code;
int n;
int j,l=0;
printf("\nENTER NO OF BOOKS YOU WANT TO ENTER");
scanf("%d",&n);
for(int i=0;i<n;i++){
printf("\nENTER DETAILS OF BOOK NO %d",i+1);
printf("\nENTER TITLE OF BOOK:-");
scanf("%s",a[i].title);
printf("ENTER NAME OF AUTHOR:-");
scanf("%s",a[i].author);
printf("ENTER PRICE OF BOOK:-");
scanf("%d",&a[i].price);
printf("ENTER CODE OF BOOK:-");
scanf("%d",&a[i].code);
}
for(int i=0;i<n;i++){
printf("\n\n\nDETAILS OF BOOK NO %d ",i+1);
printf("\nTITLE OF BOOK IS %s",a[i].title);
printf("\n AUTHOR OF BOOK IS %s",a[i].author);
printf("\n PRICE OF BOOK IS %d",a[i].price);
printf("\n CODE OF BOOK IS %d",a[i].code);


}
do{
int c;
printf("\nENTER 1 FOR INSERTION \n 2 FOR DELETION\n 3 FOR UPDATION\n");
scanf("%d",&c);
switch(c){
case 1:

printf("\n ENTER THE POSITION OF INSERTION:-");
scanf("%d",&pos);

for(int i=n-1;i>=pos;i--){

strcpy(a[i+1].title,a[i].title);
a[i+1].code=a[i].code;
strcpy(a[i+1].author,a[i].author);
a[i+1].price=a[i].price;
}
n++;
printf("\nINSERT THE DATA");
printf("\nENTER TITLE OF BOOK:-");
scanf("%s",a[pos].title);
printf("ENTER NAME OF AUTHOR:-");
scanf("%s",a[pos].author);
printf("ENTER PRICE OF BOOK:-");
scanf("%d",&a[pos].price);
printf("ENTER CODE OF BOOK:-");
scanf("%d",&a[pos].code);




printf("\nDATA AFTER INSERTION");
for(int i=0;i<n;i++){


printf("\n\n\nDETAILS OF BOOK NO %d ",i+1);
printf("\nTITLE OF BOOK IS %s",a[i].title);
printf("\n AUTHOR OF BOOK IS %s",a[i].author);
printf("\n PRICE OF BOOK IS %d",a[i].price);
printf("\n CODE OF BOOK IS %d",a[i].code);

printf("\n");

}

break;
case 2:

printf("\n ENTER THE POSITION OF DELETION:-");
scanf("%d",&pos);
for(int i=pos+1;i<n;i++)
{
strcpy(a[i-1].title,a[i].title);
strcpy(a[i-1].author,a[i].author);
a[i-1].price=a[i].price;
a[i-1].code=a[i].code;
}
n--;
for(int i=0;i<n;i++){
;

printf("\n\n\nDETAILS OF BOOK NO %d ",i+1);
printf("\nTITLE OF BOOK IS %s",a[i].title);
printf("\n AUTHOR OF BOOK IS %s",a[i].author);
printf("\n PRICE OF BOOK IS %d",a[i].price);
printf("\n CODE OF BOOK IS %d",a[i].code);

printf("\n");
} 
break ;
case 3:

printf("\nENTER THE CODE OF BOOK FOR WHICH YOU WANT TO UPDATE THE BOOK INFO");
scanf("%d",&code);
for(int i=0;i<n;i++){
    
if(code==a[i].code){
int price;
char title[20];
char author[20];
int code1;
printf("\nENTER TITLE FOR UPDATION:-");
scanf("%s",title);
printf("\nENTER AUTHOR's NAME FOR UPDATION:-");
scanf("%s",author);
printf("\nENTER PRICE OF BOOK FOR UPDATION;-");
scanf("%d",&price);
printf("\nENTER CODE OF BOOK FOR UPDATION:-");
scanf("%d",&code);
strcpy(a[i].title,title);
strcpy(a[i].author,author);
a[i].price=price;
a[i].code=code;



printf("\nDATA AFTER UPDATION");
for(int i=0;i<n;i++){


printf("\n\n\nDETAILS OF BOOK NO %d ",i+1);
printf("\nTITLE OF BOOK IS %s",a[i].title);
printf("\n AUTHOR OF BOOK IS %s",a[i].author);
printf("\n PRICE OF BOOK IS %d",a[i].price);
printf("\n CODE OF BOOK IS %d",a[i].code);

printf("\n");
}}}
break;


}

printf("\nDO YOU WANT TO CONTINUE TYPE 1");
scanf("%d",&j);
}while(j==1);


return 0;

}
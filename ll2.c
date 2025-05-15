#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL, *newnode, *temp, *prevnode;

void insertFirst() {
    newnode = malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("Enter data to insert at the beginning: ");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
    printf("Node inserted at the beginning.\n");
}

void insertLast() {
    newnode = malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("Enter data to insert at the end: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
    } else {
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    printf("Node inserted at the end.\n");
}

void insertAtpos() {
    int pos, count = 0, i = 1;

    temp = head;
    while (temp != NULL) {
        temp = temp->next;
        count++;
    
    }

    printf("Enter the position of insertion between 1 to %d+1: ",count);
    scanf("%d", &pos);


    newnode = malloc(sizeof(struct node));
   

    printf("Enter data in new node: ");
    scanf("%d", &newnode->data);

    if (pos == 1) {
        newnode->next = head;
        head = newnode;
    }else if(pos==count + 1){
        temp = head;
        while(temp->next != NULL){
            temp=temp->next;
        }
        newnode->next = NULL;
        temp->next = newnode;
       
        
    }
     else {
        temp = head;
        while (i < pos - 1) {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }

    printf("Element inserted at position %d.\n", pos);
}

void deleteFirst() {
    if (head == NULL) {
        printf("Linked List is empty.\n");
        return;
    }
    
    else if (head->next == NULL) {
        printf("\nThe element %d deleted from last node.",head->data);
         head = NULL;
        free(head);
       
    }else{

    temp = head;
    head = head->next;
    printf("The Element %d deleted from First node .\n",temp->data);
    free(temp);
    }
    
}

void deleteLast() {
    if (head == NULL) {
        printf("Linked List is empty.\n");
        return;
    }

    if (head->next == NULL) {
        printf("\nThe element %d deleted from last node.",head->data);
        free(head);
        head = NULL;
    } else {
        temp = head;
        while(temp->next != NULL){
            prevnode = temp;
            temp = temp->next;
        }
        prevnode ->next = NULL;
        printf("\nThe element %d deleted from Last node.",temp->data);
        free(temp);
        
    }
   
}

void deleteATpos() {
    int pos, count = 0, i = 1;

    temp = head;
    while (temp != NULL) {
        temp = temp->next;
        count++;
    }

    printf("Enter the position for deletion: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > count) {
        printf("Invalid position!\n");
        return;
    }

    if (pos == 1) {
        temp = head;
        head = head->next;
        printf("\nElement %d deleted from First node",temp->data);
        free(temp);
    } else if(pos == count){
        temp = head;
        while(temp->next != NULL){
            prevnode = temp;
            temp = temp->next;
        }
        prevnode ->next = NULL;
        printf("\nThe element %d deleted from Last node.",temp->data);
        free(temp);
    }else {
        temp = head;
        while (i < pos) {
            prevnode = temp;
            temp = temp->next;
            i++;
        }
        prevnode->next = temp->next;
        printf("Element %d deleted from position %d.\n",temp->data, pos);
        free(temp);
    }
   
}

void display() {
    int count = 0;

    if (head == NULL) {
        printf("Linked List is empty.\n");
        return;
    }

    temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
        count++;
    }
    printf("NULL\nTotal nodes: %d\n", count);
}
void search() {
    int ele, f = 0, pos = 1;
    printf("Enter the element to search: ");
    scanf("%d", &ele);
    temp = head;

    while (temp != NULL) {

        if (temp->data == ele) {
            f = 1;
         
            break;
        }
      
        temp = temp->next;
        pos++;
    }

    if (f == 1) {
        printf("\n%d found at %d position.\n", ele,pos);
    } else {
        printf("Element not found.\n");
    }
}
void printadd(){
    int count;
    temp = head;
    printf("\nThe address of head = %p",head);
    while(temp!=NULL){
        printf("\nThe address of node = %p",temp->next);
        temp = temp-> next;

    }
}


int main() {
    int choice;

    do {
        printf("\n--- Singly Linked List Menu ---\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at specific position\n");
        printf("4. Delete from beginning\n");
        printf("5. Delete from end\n");
        printf("6. Delete from specific position\n"); 
        printf("7. Display list\n");
        printf("8. Exit\n");
        printf("9. Search for an element\n");
        printf("10.Print address of next node\n");  
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertFirst();
                break;
            case 2:
                insertLast();
                break;
            case 3:
                insertAtpos();
                break;
            case 4:
                deleteFirst();
                break;
            case 5:
                deleteLast();
                break;
            case 6:
                deleteATpos();
                break;
            case 7:
                display();
                break;
            case 8:
                printf("Exiting program.\n");
                break;
            case 9:
                search();  
                break;
            case 10:
                 printadd();
                 break;    
            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 8);

    return 0;
}

//create circular ll info about college
#include<stdio.h>
#include<stdlib.h>

struct Node  {
	int data;
	struct Node* next;
};

struct Node* head = NULL; 

void insertAtBegg(int x){
    struct Node* newNode
		= (struct Node*)malloc(sizeof(struct Node));
        struct Node* temp;

    if (head == NULL) {
        
        newNode->data = x;
        newNode->next = head;
        head = newNode;
        return;
    }
    newNode->data = x;
    newNode->next = head;
    temp = newNode;
    while (temp->next != head)
    {
        temp=temp->next;
    }
    temp->next = newNode;
    newNode = head;
    


}

void print() {
	struct Node* temp = head;

    do{
        printf("%d ",temp->data);
		temp = temp->next;
    }while(temp != head);
	printf("\n");
}

void deleteAtEnd(){
    struct Node* temp;
    struct Node* temp1;
    if (head == NULL){
        printf("List is Empty");
        return;
    }
    
    temp = head;
    while (temp->next != head)
    {
       temp = temp->next;
    }
    while (temp1->next != temp)
    {
       temp1 = temp1->next;
    }
    temp1->next = head;
    free(temp);
    
}

int main(){
    // deleteAtEnd();
    insertAtBegg(77);
    insertAtBegg(4); 
    insertAtBegg(45); 
    // deleteAtEnd();
    
    print();
    
}
//linked list with info about a student
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node* head;
void insertAtSpecificPos(int x,int n){
     struct Node* newNode
		= (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp;  
    if (head == NULL)
    {
        head = newNode;
        newNode->data = x;
        newNode->next = NULL;
        return;
    }
    newNode->data = x;

    if(n == 0) {
        // newNode = head;
        newNode->next = head;
        head = newNode;
    } else{
    for (int i = 0; i < n-1; i++) {
        temp=temp->next;
    }
    newNode->next = temp->next;
    temp->next=newNode;
    }
}

void print(){
    struct Node* temp;
    while(temp != NULL){
        printf("%d",temp->data);
    }
}

int main(){
    
    insertAtSpecificPos(3,0);
    // print();
    // insertAtSpecificPos(4,2);
    // insertAtSpecificPos(6,1);
}
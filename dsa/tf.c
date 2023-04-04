#include <math.h>
#include <stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* head;
void ok(int x){
    struct Node* temp
		= (struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next= NULL;
    head = temp;
    // return head;
}
void trans(){

    struct Node* temp=head;
    if (head == NULL){
        printf("List is empty.");
        return;
    }
    temp = head;
    while (temp != NULL)
    {
        printf("%d\n",temp->data);
        temp = temp->next;
    }
    
}
void insertAtBegg(int x){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    // struct Node* temp = head;

    if (head == NULL)
    {
        head=newNode;
        return;
    }
    // temp->next = temp;
    newNode->data = x;
    newNode->next = head;
    head=newNode;
}
int main(){
    // printf("hi");
    ok(1);
    insertAtBegg(2);
    insertAtBegg(3);
    insertAtBegg(4);
    
    trans();
}

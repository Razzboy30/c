//stack its fncs
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *ptr;
};
struct node *top = 0;

void display(){
    struct node *temp;
    temp = top;
    if(top == 0){
        printf("stack is empty \n");
    }
    else{
        printf("displaying elements \n");
        while(temp ->next != NULL){
            printf("%d \n", temp ->data);
            temp = temp ->next;
        }
        printf("%d \n", temp ->data);
    }
}
void push(int x){
    struct node  *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode ->data = x;
    newnode  ->next =top;
    top = newnode;
};
void peek(){
    if(top == 0){
        printf("stack is empty ");
    }
    else{
        printf("the top elemennts is %d \n", top ->data);
    }
}
void pop(){
    struct node *temp;
    temp = top;
    if(top == NULL){
        printf("underflow");
    }
    else{
        printf("the popped element is %d \n", top ->data);
        top = top ->next;
        free(temp);
    }
}
int main(){

    push(2);
    push(4);
    push(50);
    // display();
    // peek();
    // pop();
    display();
    
     printf("\n Ritkaar Singh AI-DS 00213211921 \n");

}
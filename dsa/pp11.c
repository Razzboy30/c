#include <math.h>
#include <stdio.h>
struct Node {
    int data;
    struct Node* next;
};

struct Node* head;
void insert(x){
    int temp;
    // struct Node* temp=(modf*)malloc(sizeof(struct Node));
    // (int*) malloc(s-> size*  sizeof(int));
    struct Node*temp= (Node*) malloc(sizeof(struct Node));
    temp->data = x;
    temp->next=NULL;
    if(head != NULL) temp->next=head;
    head=temp;
}
void print(){
    struct Node* temp=head;
    printf("list is");
    while(temp != NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    head = NULL;
    printf("How many num\n");
    int n,i,x;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("val\n");
        scanf("%d",&x);
        insert(x);
        print();
    }
}
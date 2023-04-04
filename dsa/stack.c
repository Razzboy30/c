#include <stdio.h>
#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;

void push(int x){
    if(top == MAX_SIZE - 1){
        printf("error\n");
    } else{
        A[++top]=x;
    }
}

void pop(){
    if(top == -1){
        printf("error no delkete\n");
    } else{
        top--;
    }
}

int topp(){
    return A[top];
}
void prin(){
    for (int i = 0; i <= top; i++)
    {
        printf("%d",A[i]);
        // printf("\n");
    }
    printf("\n");
}
int main(){
    push(3); prin();
    push(5);prin();
    pop(); prin();
    push(7); prin();
    // printf("%d",*A);
    // prin();
}
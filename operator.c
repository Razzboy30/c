#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack *ptr){

    if(ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int pop (struct stack* ptr){
   if (isEmpty(ptr)){
      printf("stack underflow\n");
      return -1;
   }
   else{
      int val=ptr->arr[ptr->top];
      ptr->top--;
      return val;
   }
}

void push (struct stack* ptr, int val){
   if (isFull(ptr)){
      printf("stack overflow\n");
   }
   else{
      ptr->top++;
      ptr->arr[ptr->top]=val;
   }
}

int isEmpty(struct stack *ptr){

    if (ptr->top == -1)

    {
        return 0;
    }
    else
    {
        return 1;
    }
}


int main()
{

    struct stack *sp = (struct stack *)malloc(sizeof(struct stack)),val;
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    printf("stack has been created\n");

 printf("before pushing full: %d\n",isFull(sp));
 printf("after pushing,empty : %d\n",isEmpty(sp));
push(sp,1);
push(sp,23);
push(sp,99);
push(sp,75);
push(sp,97);
push(sp,102);
push(sp,44);
push(sp,55);
push(sp,43);
push(sp,58); //pushed 10 values
//push(sp,89); //stack overflow,since size of stack is 10
printf("after pushing,isFull %d\n",isFull(sp));
printf("after pushing,isEmpty %d\n",isEmpty(sp));
printf("popped %d from stack\n",pop(sp)); //LIFO
printf("popped %d from stack\n",pop(sp)); //LIFO
printf("popped %d from stack\n",pop(sp)); //LIFO

return 0;

}
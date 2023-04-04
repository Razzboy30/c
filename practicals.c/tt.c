#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int enrollment;
    char name[100];
    // float percentage;
    struct node *p;
};
struct node *head=0;

void printlist()
{
    struct node *node =head;
    while(node!=0)
    {
        printf("Rollno: %d\n", node->enrollment);
		printf("Name: %s\n", node->name);
		// printf("Percentage: %f\n", node->percentage);
        node=node->p;
    } 
    printf("\n");
}

void student(int x,char* y,int n)
{
    struct node* node1
		= (struct node*)malloc(sizeof(struct node));
    // printf("Enter enrollment number-");
    // printf("Enter name:");
    // scanf("%s",
    node1->enrollment=x;
    strcpy(node1->name,y);
    // node1->percentage=g;
    node1->p=0;
    if(n==1)
    {
        node1->p=head;
        head=node1;
        return;
    }
    struct node *temp2=head;
    for(int i=0;i<n-2;i++)
    {
        temp2=temp2->p;
    }
    node1->p=temp2->p;
    temp2->p=node1;
}

int main()
{
    student(16,"Ishan",1);
    student(43,"Tanmay",2);
    student(48,"Vansh",3);
    student(40,"Sidharth",2);
    printlist();
}
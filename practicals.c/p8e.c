#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    // char name[100];
    struct node * next;
}*head;

void deleteAtEnd()
{
     struct node *n,*r;
     n = head;
  while (n->next != head)
    {
      r=n;     
      n = n->next;
    }
  r->next = head;
  printf ("The deletion at end node is -> %d", n->data);
  free (n);
    // struct node* temp, *prev;
    // temp = head;
    // do
    // {
    //     prev = temp;
    //     temp = temp->next;
    // }while(temp != head);
    // prev->next = head;

    // printf("%d",prev->next);
    // free(temp);
}

void createList(int n);
void displayList();
void insertAtBeginning(int data);

int main()
{
    int n, data, choice=1;

    head = NULL;

    while(choice != 0)
    {
        printf("============================================\n");
        printf("College Number\n");
        printf("============================================\n");
        printf("1. Create List\n");
        printf("2. Display list\n");
        printf("3. Insert at beginning\n");
        printf("4. Delete at End\n");
        printf("0. Exit\n");
        printf("--------------------------------------------\n");
        printf("Enter your choice : ");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter the total number of nodes in list: ");
                scanf("%d", &n);
                createList(n);
                break;
            case 2:
                displayList();
                break;
            case 3:
                printf("Enter data to be inserted at beginning: ");
                scanf("%d", &data);
                insertAtBeginning(data);
                break;
                case 4:
                deleteAtEnd();
                break;
            case 0:
                break;
            default:
                printf("Error! Invalid choice. Please choose between 0-4");
        }

        printf("\n\n");
    }

    return 0;
}

void createList(int n)
{
    int i, data;
    struct node *prevNode, *newNode;

    if(n >= 1)
    {
       
        head = (struct node *)malloc(sizeof(struct node));

        printf("Enter data of 1 node: ");
        scanf("%d", &data);

        head->data = data;
        head->next = NULL;

        prevNode = head;

        
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));

            printf("Enter data of %d node: ", i);
            scanf("%d", &data);

            newNode->data = data;
            newNode->next = NULL;

            prevNode->next = newNode;
            
            prevNode = newNode;
        }

       
        prevNode->next = head;

        printf("\nCIRCULAR LINKED LIST CREATED SUCCESSFULLY\n");
    }
}

void displayList()
{
    struct node *current;
    int n = 1;

    if(head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        current = head;
        printf("DATA IN THE LIST:\n");

        do {
            printf("Data %d = %d\n", n, current->data);

            current = current->next;
            n++;
        }while(current != head);
    }
}
 
void insertAtBeginning(int data)
{
    struct node *newNode, *current;

    if(head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
       
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = data;
        newNode->next = head;

       
        current = head;
        while(current->next != head)
        {
            current = current->next;
        }
        current->next = newNode;

        head = newNode;

        printf("NODE INSERTED SUCCESSFULLY\n");
    }
}
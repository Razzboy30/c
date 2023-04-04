#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *LINK;
};
typedef struct node NODE;

NODE *START = NULL, *END, *NEW;

void creatList(int n)
{
    int i;
    printf("Enter %d Roll Number: \n", n);
    for(i=1;i<=n;i++)
    {
        NEW = (NODE*)malloc(sizeof(NODE));
        printf("Enter Number: ");
        scanf("%d", &NEW->info);
        if(START == NULL)
        {
            START = NEW;
        }
       else
        {
            END->LINK = NEW;
        }
        END = NEW;
    }
    END->LINK = NULL;
    printf("\n");
}

void insertAtDesired()
{
    int num, loc, i;
    NODE *TEMP;
    NEW = (NODE*)malloc(sizeof(NODE));
    printf("Enter Number and location: ");
    scanf("%d%d", &NEW->info, &loc);
    if(loc == 1)
    {
        NEW->LINK = START;
        START = NEW;
        return;
    }
    TEMP = START;
    for(i=1;i<=loc-2;i++)
    {
        TEMP = TEMP->LINK;
        if(TEMP == NULL)
        {
            printf("Location is not present");
            return;
        }
    }
    NEW->LINK = TEMP->LINK;
    TEMP->LINK = NEW;
}

void display()
{
    NODE *TEMP;
    TEMP = START;
    printf("Elements: ");
    while(TEMP != NULL)
    {
        printf("%d ", TEMP->info);
        TEMP = TEMP->LINK;
    }
    printf("\n");
}

int main()
{
    int n;
    printf("CREATING LINKED LIST AND READING ROLL NUMBER OF STUDENTS\n");
    printf("Enter Number of students: ");
    scanf("%d", &n);
    creatList(n);
    printf("Displaying original list\n");
    display();
    insertAtDesired();
    printf("Displaying Updated List\n");
    display();
    printf("Ritkaar Singh 00213211921 AI-DS");
}
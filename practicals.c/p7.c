#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node  {
	int code;
	int basic;
	char name[100];
	struct Node* next;
	struct Node* prev;
};

struct Node* head = NULL;
// struct Node* head = '\0';

void deleteAtEnd()
{
    struct Node *temp, *prev;
    temp = head;
    if (temp == NULL) {
        printf("List is empty");
        return;
    }
    while(temp->next != NULL )
    {
        temp = temp->next;
    }
    prev = temp->prev;
    // prev->next = '\0';
    prev->next = NULL;
    free(temp);
    return;
}

void InsertAtHead()
{
    int code, basic;
    char nam[100];
    printf("Enter Code Of Employee: ");
    scanf("%d", &code);
    printf("Enter Basic Salery of Employee: ");
    fflush(stdin);
    scanf("%d", &basic);
   printf("Enter Name of Employee:");
   fflush(stdin);
   scanf("%s", &nam);
	struct Node *NEW ;
	NEW = (struct node*)malloc(sizeof(struct Node));
	NEW->code = code;
	NEW->basic = basic;
	strcpy(NEW->name,nam);
	// NEW->name = &nam;
	//NEW->name = &name;
	if(head == NULL)
    {
		head = NEW;
		// head->next = '\0';
		head->next = NULL;
		// head->prev = '\0';
		head->prev = NULL;
		return;
	}
	head->prev = NEW;
	NEW->next = head;
	// NEW->prev = '\0';
	NEW->prev = NULL;
	head = NEW;
}

void Print()
{
	struct Node* temp = head;
	printf("Printing Data of Employee: \n");
	while(temp != NULL) {
		printf("Code: %d, Name: %s, Basic: %d \n", temp->code,temp->name, temp->basic);
		temp = temp->next;
	}
	printf("\n");
}

int main() {

    int choice;
	while(1)
    {
        InsertAtHead();
        printf("Want to Continue? : ");
        fflush(stdin);
        scanf("%d", &choice);
        if(choice == 0)
            break;
	}
	printf("Want to delete the last node?: ");
	scanf("%d", &choice);
	if(choice == 1)
        deleteAtEnd();

    printf("Displaying Data in Node\n");
    Print();
    printf("Ritkaar Singh 00213211921 AI-DS");
}
#include <stdio.h>
#include <stdlib.h>

struct node{

    int data;
    struct node *address;
};

void begin(struct node **head)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    printf("ENTER THE DATA TO INSERT IN THE BEGINING :- \n");
    scanf("%d", &newNode->data);

    newNode->address = *head;
    *head = newNode;
}

void end(struct node **head)
{

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *current = (struct node *)malloc(sizeof(struct node));

    current = *head;

    printf("ENTER THE DATA TO INSERT IN THE END :- \n");
    scanf("%d", &newNode->data);

    newNode->address = NULL;

    while (current->address != NULL)
    {

        current = current->address;
    }

    current->address = newNode;
}
void any(struct node **head)
{
    int pos, count = 0;
    printf("ENTER THE POSITION IN WHICH YOU WANT TO INSERT THE NODE :- \n");
    scanf("%d", &pos);

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *current = (struct node *)malloc(sizeof(struct node));

    current = *head;

    printf("ENTER THE DATA TO INSERT IN THE END :- \n");
    scanf("%d", &newNode->data);

    while (count != pos - 1 && current->address != NULL)
    {

        current = current->address;
        count++;
    }

    newNode->address = current->address;
    current->address = newNode;
}
void dbegin(struct node **head) 
{
    struct node *current = *head;
    *head = (*head)->address;
    free(current);
}

void dend(struct node **head)
{
    struct node *current;

    current = *head;

    while (current->address->address != NULL)
    {
        current = current->address;
    }

    free(current->address);
    current->address = NULL;
}
void dany(struct node **head)
{
    int pos, count = 0;
    printf("ENTER THE POSITION IN WHICH YOU WANT TO DELETE THE NODE :- \n");
    scanf("%d", &pos);

    struct node *current;
    current = *head;

    while (count != pos - 1 && current->address != NULL)
    {

        current = current->address;
        count++;
    }

    current->address = current->address->address;
}

void display(struct node *head, struct node *current)
{

    current = head; 

    while (current != NULL)
    {

        printf("THE DATA :- %d\n", current->data);
        current = current->address;
    }
}

int main()
{
    int n, c;
    struct node *head, *current;

    printf("ENTER THE NUMBER OF NODES :-\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){

        if (i == 0)
        {
            head = (struct node *)malloc(sizeof(struct node));
            current = head;
        }
        else
        {

            current->address = (struct node *)malloc(sizeof(struct node));
            current = current->address;
        }

        printf("ENTER THE DATA :- \n");
        scanf("%d", &current->data);
    }

    current->address = NULL;
    current = head;
    do
    {
        printf("ENTER :- \n1 FOR INSERTING IN THE BEGINING.\n2 FOR INSERTING AT THE END.\n3 FOR INSERTING AT ANY POSITION\n4 FOR DELETING IN THE BEGINING.\n5 FOR DELETING AT THE END.\n6 FOR DELETING AT ANY POSITION\n7 FOR DISPLAYING THE LINKEDLIST\nPRESS ANY OTHER NUMBER TO EXIT\n");
        scanf("%d", &c);

        switch (c){
        case 1:
            begin(&head);
            display(head, current);
            break;
        case 2:
            end(&head);
            display(head, current);
            break;
        case 3:
            any(&head);
            display(head, current);
            break;
        case 4:
            dbegin(&head);
            display(head, current);
            break;
        case 5:
            dend(&head);
            display(head, current);
            break;
        case 6:
            dany(&head); 
            display(head, current);
            break;
        case 7:
            display(head, current);
            break;
        default:
            exit(0);
            break;
        }
    } while (c);
    return 0;
}
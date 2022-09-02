#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

void display(struct node **head)
{

    struct node *current = *head;

    while (current != 0)
    {

        printf("%d\n", current->data);
        current = current->next;
    }
}

void begin(struct node **head)
{

    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    printf("ENTER THE DATA IN THE NEW NODE :- ");
    scanf("%d", &newNode->data);

    newNode->prev = NULL;
    newNode->next = *head;
    (*head)->prev = newNode;
    *head = newNode;
}

void end(struct node **head)
{

    struct node *newNode = (struct node *)malloc(sizeof(struct node)), *current;
    current = *head;

    printf("ENTER THE DATA IN THE NEW NODE :- ");
    scanf("%d", &newNode->data);

    while (current->next != NULL)
    {

        current = current->next;
    }

    current->next = newNode;
    newNode->prev = current;
    newNode->next = NULL;
}

void any(struct node **head)
{

    int n, c = 0;
    struct node *newNode = (struct node *)malloc(sizeof(struct node)), *current;
    current = *head;

    printf("ENTER THE DATA IN THE NEW NODE :- ");
    scanf("%d", &newNode->data);

    printf("ENTER THE POSITION OF THE NEW NODE :- ");
    scanf("%d", &n);

    while (c != n - 1)
    {
        current = current->next;
        c++;
    }

    newNode->next = current->next;
    current->next = newNode;
    newNode->prev = current;
}

void dbegin(struct node **head)
{

    struct node *current = *head;
    *head = (*head)->next;

    free(current);
}

void dend(struct node **head)
{

    struct node *current = *head;

    while (current->next->next != NULL)
    {

        current = current->next;
    }

    current->next = NULL;
}

void dany(struct node **head)
{

    int n, c = 0;
    struct node *current, *temp;
    current = *head;

    printf("ENTER THE POSITION OF THE NEW NODE :- ");
    scanf("%d", &n);

    while (c != n - 2)
    {
        current = current->next;
        c++;
    }

    temp = current -> next -> next;
    current -> next = temp;
}

int main()
{
    struct node *head, *current;
    int n, c;

    printf("ENTER THE NUMBER OF NODES :- ");
    scanf("%d", &n);

    head = (struct node *)malloc(sizeof(struct node));
    head->prev = NULL;
    current = head;

    printf("ENTER THE DATA IN THE NODE :- ");
    scanf("%d", &current->data);

    for (int i = 1; i < n; i++)
    {
        current->next = (struct node *)malloc(sizeof(struct node));
        current->next->prev = current;
        current = current->next;
        printf("ENTER THE DATA IN THE NODE :- ");
        scanf("%d", &current->data);
    }

    current->next = NULL;
    current = head;

    printf("ENTER :- \n1 FOR INSERTING IN THE BEGINING.\n2 FOR INSERTING AT THE END.\n3 FOR INSERTING AT ANY POSITION\n4 FOR DELETING IN THE BEGINING.\n5 FOR DELETING AT THE END.\n6 FOR DELETING AT ANY POSITION\n7 FOR DISPLAYING THE LINKEDLIST\nPRESS ANY OTHER NUMBER TO EXIT\n");
    scanf("%d", &c);

    switch (c)
    {

    case 1:
        begin(&head);
        display(&head);
        break;
    case 2:
        end(&head);
        display(&head);
        break;
    case 3:
        any(&head);
        display(&head);
        break;
    case 4:
        dbegin(&head);
        display(&head);
        break;
    case 5:
        dend(&head);
        display(&head);
        break;
    case 6:
        dany(&head);
        display(&head);
        break;
    default:
        break;
    }

    return 0;
}
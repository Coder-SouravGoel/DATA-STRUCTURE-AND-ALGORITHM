#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *prev;
    struct node *next;
};

int main()
{
    struct node *head, *current;
    int n;

    printf("ENTER THE NUMBER OF NODES :- ");
    scanf("%d", &n);

    head = (struct node *)malloc(sizeof(struct node));
    head -> prev = NULL;
    current = head;

    printf("ENTER THE DATA IN THE NODE :- ");
    scanf("%d", &current->data);

    for (int i = 1; i < n; i++)
    {
        current -> next = (struct node *)malloc(sizeof(struct node));
        current -> next -> prev = current;
        current = current -> next;
        printf("ENTER THE DATA IN THE NODE :- ");
        scanf("%d", &current->data);
    }

    current -> next = NULL;
    current = head;

    while (current != NULL){

        printf("%d\n", current -> data);
        current = current -> next;

    }

    return 0;
}
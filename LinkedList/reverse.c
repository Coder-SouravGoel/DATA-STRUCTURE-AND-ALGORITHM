#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *address;
};

int main()
{
    struct node *head, *current;
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

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

    current -> address = NULL;
    current = head;

    struct node *prev = NULL;

    while (current != NULL){

        struct node *temp = current -> address;
        current -> address = prev;
        prev = current;
        current = temp;

    }

    head = prev;
    current = head;

    while (current != NULL){

        printf("%d \n",current -> data);
        current = current -> address;

    }

    return 0;
}
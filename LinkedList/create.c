#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *address;
};

int main()
{
    int n;
    struct node *head, *current;

    printf("ENTER THE NUMBER OF ELEMENTS IN THE NODE :- \n");
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

    while (current != NULL)
    {

        printf("THE DATA :- %d\n", current->data);
        current = current->address;
    }
    return 0;
}
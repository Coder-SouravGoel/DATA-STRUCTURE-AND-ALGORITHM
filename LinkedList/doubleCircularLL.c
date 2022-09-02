#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *next;
    struct node *prev;
};
int main()
{

    struct node *current, *head, *slowp = head, *fastp = head, *temp = NULL;
    int n;

    printf("ENTER THE NUMBER OF NODES :- \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        if (i == 0)
        {

            head = (struct node *)malloc(sizeof(struct node));
            current = head;
            head->prev = NULL;
        }

        else
        {

            current->next = (struct node *)malloc(sizeof(struct node));
            current->next->prev = current;
            current = current -> next;
        }

        printf("ENTER THE DATA IN THE NODE :- ");
        scanf("%d", &current->data);
    }

    current->next = head;
    temp = head;

    /*     while (slowp && fastp && fastp -> next)
        {
            slowp = slowp ->next;
            fastp = fastp -> next -> next;

            if (slowp == fastp){

                temp = slowp;

            }
        }

        printf("THE DATA :- %d\n", temp -> data); */

    do
    {

        printf("%d\n", temp->data);
        temp = temp->next;
    } while (temp != head);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *pre;
    struct node *next;
};
void createdoublelinklist(struct node **head, int n)
{
    struct node *temp = NULL;
    for (int i = 0; i < n; i++)
    {
        if (*head == NULL)
        {
            *head = (struct node *)malloc(sizeof(struct node));
            printf("enter value:");
            scanf("%d", &(*head)->data);
            (*head)->next = (*head);
            (*head)->pre = (*head);
            temp = (*head);
        }
        else
        {
            temp->next = (struct node *)malloc(sizeof(struct node));
            printf("enter value:");
            scanf("%d", &temp->next->data);
            temp->next->pre = temp;
            temp->next->next = *head;
            (*head)->pre = temp->next;
            temp = temp->next;
        }
    }
}
int main()
{
    printf("Enter a nuber node:");
    int n;
    scanf("%d", &n);
    struct node *head = NULL;
    createdoublelinklist(&head, n);
    printf("%d",head->pre->pre->data);

    return 0;
}
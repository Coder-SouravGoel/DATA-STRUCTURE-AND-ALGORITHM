#include <stdio.h>
#include <stdlib.h>

struct node{

    struct node *prev;
    int data;
    struct node *next;

};

struct node* addToEmpty(struct node* head, int data){

    struct node* temp = malloc(sizeof(struct node));
    temp -> prev = NULL;
    temp -> data = data;
    temp -> next = NULL;
    return temp;

}
int main()
{

    struct node *head = (struct node*)malloc(sizeof(struct node));
    head -> prev = NULL;
    head -> data = 10;
    head -> next = NULL;

    head = addToEmpty(head, 45);
    head->next = addToEmpty(head, 15);
    printf("%d", head->data);

    return 0;
}
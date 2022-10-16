#include <stdio.h>
#include <stdlib.h>
#define nl printf("\n")

struct node{
    int data;
    struct node* next;
};
struct node* rear=NULL;
struct node* front=NULL;

void insert(){

    struct node* newnode = malloc (sizeof(struct node));
    if (newnode == NULL) printf("overflow");
    else{
    printf("Enter data for new node: ");
    scanf(" %d",&(newnode->data));
    if(front == NULL){  front = rear =newnode; 
    front ->next = NULL;
    rear -> next =NULL;}
    else{ rear->next = newnode;
    rear = newnode;
    rear->next = NULL;
    }}    

}

void display(){
    struct node* curr;
    curr = front;
    if(front==NULL) printf("Empty Queue");
    else while(curr != NULL) { printf("%d ,",curr->data); curr=curr->next;}
}

int main(){
    int n=10;
    while(n){
    
    insert();
    display();
    n--;
    }

}
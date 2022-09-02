#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *next;

    node(int data)
    {

        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(node *&head, int d)
{

    // create a new node

    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void print(node *&head)
{

    node *current;
    current = head;
    while (current != NULL)
    {

        cout << current->data << endl;
        current = current->next;
    }
    current = head;
}
int main()
{

    node *node1 = new node(10);

    node *head = node1;

    insertAtHead(head, 12);
    insertAtHead(head, 32);
    print(head);

    return 0;
}
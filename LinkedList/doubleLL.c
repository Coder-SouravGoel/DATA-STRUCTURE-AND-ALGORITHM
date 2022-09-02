//INSERT AT BEGINING

void insertAtBegining() {
struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));printf("\nEnter the new data: ");
scanf("%d"
, &newNode->data);
newNode->next = head;
new_node->prev = NULL;
if (head != NULL)
head->prev = newNode;
head = newNode;
}

//INSERT AT END

void insertAtEnd() {
struct Node* last = head
struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
printf("\nEnter the new data: ");
scanf("%d"
, &newNode->data);
newNode->next = NULL;
if (head == NULL) {
newNode->prev = NULL;
head = newNode;
return; }
while (last->next != NULL)
last = last->next;
last->next = newNode;
newNode->prev = last;
return; }

//INSERT AT ANY POSITION

void insertAtAnyPosition() {
int i = 1, pos;
struct Node* newNode,
*curr;
curr = head;
if(head == NULL) {
printf("\nEmpty list...");
return;
}
printf("\nEnter the position at which it will
be inserted: ");
scanf("%d"
, &pos);
if(pos == 1) {insertAtBeginning(); return;}
while(i< pos-1 && curr!=NULL) {
curr = curr->next;
i++; }
if(curr->next == NULL) {insertAtEnd();return;}
if(curr != NULL) {
newNode = (struct Node*)
malloc(sizeof(structNode));printf("\nEnter the newdata: ");scanf("%d"
, &newNode->data);newNode->next =curr->next;
newNode->prev =curr;
if(curr->next != NULL) curr->next->prev=newNode;curr->next = newNode;
}
else printf("Invalid position...\n");}


//DELETE AT THE BEGINING

void deleteATBeginning() {
struct Node *temp;
if(head == NULL) {
printf("Empty List, Delete is not possible...\n");
return;
}
temp = head;
head = head->next;
if(head!=NULL) head->prev = NULL;
free(temp);
}

//DELETE AT THE END

void deleteAtEnd() {
struct Node *temp;
if(head == NULL) {
printf("Empty List, Delete is not possible...\n");
return;
}
temp = head;
while(temp->next != NULL) temp=temp->next;
if(temp->prev != NULL) temp->prev->next = NULL;
else head = NULL;
free(temp);
}

//DELETE AT ANY POSITION

void deleteAtPosition(int pos) {
struct Node *temp;
int i;
if(head == NULL) {
printf("Empty List, Delete is not possible...\n");
return;
}
if(pos == 1) deleteAtBeginning();
temp = head;
i=1;
while(i<pos && temp!=NULL) {
i++;
temp=temp->next;
}
if(temp==NULL) printf("Invalid Position...\n");
else if(temp->next == NULL) deleteAtEnd();
else {
temp->prev->next =temp->next;temp->next->prev=temp->prev;free(temp);


//DELETE ALL THE EVEN NODES FROM THE LINKED LIST

void deleteEvenNodes() {
struct Node* curr = head;
struct Node* nxt;
if(head==NULL) {
printf("Empty List, Invalid deletion...\n");
return;
}
while (curr != NULL) {
nxt = curr->next;
if (curr->data % 2 == 0) {
// If node to be deleted is head node
if (head == curr)
head = curr->next;
// if node to be deleted is NOT the last node
if (curr->next != NULL)
curr->next->prev = curr->prev;
// if node to be deleted is NOTthefirstnodeif (del->prev !=NULL)del->prev->next =del->next;free(curr);
}
curr = nxt;
}
}

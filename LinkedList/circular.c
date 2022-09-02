//  INSERT AT EMPTY

void insertToEmptyList() {
if (head != NULL)
return;
struct Node *curr = (struct Node*)malloc(sizeof(struct Node));
printf("\nEnter the data: ");
scanf("%d"
, &curr->data);
curr -> next = curr;
head = last = curr;
}

// INSERT AT BEGIN

void insertAtBeginning() {
if (last == NULL) {
insertToEmptyList();
return;
}
struct Node *curr = (struct Node *)malloc(sizeof(struct Node));
printf("\nEnter the data: ");
scanf("%d"
, &curr->data);
curr -> next = last -> next;
last -> next = curr;
head = curr;
}

//AT END

void insertAtEnd() {
struct Node *newNode = (struct Node*)
malloc(sizeof(struct Node));
printf("\nEnter the data: ");
scanf("%d"
, &newNode->data);
if (last == NULL) {
newNode -> next = newNode;
head = last = newNode;
}
newNode -> next = last -> next;
last -> next = newNode;
last = newNode;
}
void insertAtEnd() {
struct Node *curr;
struct Node *newNode =(struct Node*)malloc(sizeof(struct Node));printf("\nEnter the data: ");
scanf("%d"
, &newNode->data);
if (head == NULL) {
newNode->next = newNode;
head = newNode;
}
curr = head;
while(curr->next != head)
curr = curr->Next;
newNode->next = curr->next;
curr->next = newNode; }
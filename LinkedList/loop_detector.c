int detectLoop() {
struct Node *slowp = head,
*fastp = head;
if (head == NULL || head->next == NULL) {
printf(\nEmpty list or list contains one node...");
return 0;
}
while (slowp && fastp && fastp->next) {
slowp = slowp->next;
fastp = fastp->next->next;
if (slowp == fastp)
return 1;
}
return 0;
}
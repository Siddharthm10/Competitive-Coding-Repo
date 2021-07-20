//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(struct Node *head, int n)
{
    int counter = n;
    struct Node* first = head;
    struct Node* last = head;
    while(n--){
        if(last==NULL) return -1;
        last = last->next;
    }
    while(last!=NULL){
        first = first->next;
        last = last->next;
    }
    return first->data;
}

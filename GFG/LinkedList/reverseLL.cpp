class Solution
{
    public:
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        struct Node* current = head;
        struct Node* prev = NULL, *next = NULL;

        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
        return head;

        
    }
    
};
    

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        int rotations = k;
        struct Node* fi = head;
        struct Node* se = head;
        while(--rotations){
            se = se->next;
        }
        Node* la = se;
        while(la->next){
            la = la->next;
        }
        if(la==se) return head;
        
        head = se->next;
        se->next = NULL;
        la->next = fi;
        return head;
    }
};

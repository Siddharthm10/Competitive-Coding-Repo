
//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        ListNode* slow, *fast;
        
        if(head == NULL || head->next == NULL)
        {
            return false;
        }
        
        slow = head;
        fast = slow->next;
        while( fast !=  NULL )
        {
            if( fast == slow)
            {
                return true;
            }
            slow = slow->next;
            if( fast->next && fast->next->next)
                fast = fast->next->next;
            else
                fast = fast->next;
        }
        return false;
    }
};
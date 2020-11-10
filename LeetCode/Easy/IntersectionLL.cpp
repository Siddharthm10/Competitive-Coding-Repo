/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
    int getCount(ListNode *head){
        struct ListNode* temp = head;
        int length=0;
        while(temp!=NULL){
            temp = temp->next;
            length++;
        }
        return length;
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        struct ListNode* tempA = headA;
        struct ListNode* tempB = headB;
        int l1=getCount(tempA), l2=getCount(tempB);
        
        
        if(l1>l2){
            int diff = l1-l2;
            while(diff-->0){
                tempA=tempA->next;
            }
        }
        else{
            int diff = l2-l1;
            while(diff-->0){
                tempB=tempB->next;
            }
        }
        while(tempA!=tempB){
            tempA=tempA->next;
            tempB=tempB->next;
        }
        
        return tempA; 
    }
};
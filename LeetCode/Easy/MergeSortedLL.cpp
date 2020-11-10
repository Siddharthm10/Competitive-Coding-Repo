/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        struct ListNode* result=NULL;
        struct ListNode** tail=&result;
        
        while(1){
            if(l1==NULL){
                *tail = l2;
                break;
            }
            else if(l2==NULL){
                *tail = l1;
                break;
            }
            if(l1->val<=l2->val){
                *tail = l1;
                l1=l1->next;
            }
            else{
                *tail = l2;
                l2=l2->next;
            }
            tail = &((*tail)->next);  
        }
        return result;
    }
};
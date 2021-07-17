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
    ListNode* middleNode(ListNode* head) {
        struct ListNode* slowPtr = head;
        struct ListNode* fastPtr = head;
        while(fastPtr->next!=NULL){
            slowPtr = slowPtr->next;
            if(fastPtr->next->next==NULL){
                fastPtr=fastPtr->next;
            }
            else{
                fastPtr = fastPtr->next->next;
            }
        }
        return slowPtr;
    }
};
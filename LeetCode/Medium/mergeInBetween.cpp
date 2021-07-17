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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int diff = b-a+2;
        ListNode* am1 = list1;
        ListNode* bm1 = list1;
        ListNode* temp = list2;
        while(diff--){
        	bm1=bm1->next;
        }
        while(--a){
        	am1=am1->next;
        	bm1=bm1->next;
        }
        am1->next = temp;
        while(temp->next){
        	temp = temp->next;
        }
        temp->next = bm1;
        return list1;
    }
};
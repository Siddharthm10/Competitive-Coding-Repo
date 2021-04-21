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
//Initial Solution to the problem was:
//56% on time, 84% on space
class Solution {
public:
    int getCount(ListNode* head){
        int counter=0;
        ListNode* temp = head;
        while(temp!=NULL){
            counter++;
            temp=temp->next;
        }
        return counter;
    }
    
    ListNode* swapNodes(ListNode* head, int k) {
        int posFromEnd = getCount(head)-k+1;
        ListNode* kthStart = head;
        ListNode* kthEnd = head;
        int temp = 0;
        while(--k){
            kthStart = kthStart->next;
        }
        while(--posFromEnd){
            kthEnd = kthEnd->next;
        }
        temp = kthStart->val;
        kthStart->val = kthEnd->val;
        kthEnd->val = temp;
        return head;   
    }
};


// For an amazing solution with explaination visit https://leetcode.com/problems/swapping-nodes-in-a-linked-list/discuss/1110017/C%2B%2B-Single-Pass-2-Pointer-Solution-Explained-~100-Time-~95-Space

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
    
    void print(ListNode* head){
        struct ListNode* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<endl;
            temp = temp->next;
        }
    };

    int lengthLL(ListNode* head){
        struct ListNode* temp = head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp = temp-> next;
        }
        return count;
    }
    
    
    bool isPalindrome(ListNode* head) {
    //reverse the linked list and then compare it with the original 
    //if found not equal return false otherwise true
        struct ListNode* temp = head;
        int length = lengthLL(temp);
        if(length>0){
            char len[length];
            int i=0;
            while(temp!= NULL){
                len[i]=temp->val;
                temp = temp->next;
                i++;
            }

            for(int i=0, j=length-1; i<length; i++, j--){
                if(len[i]!=len[j])
                    return false;
            }
            return true;
        }
        else return true;
    }
};
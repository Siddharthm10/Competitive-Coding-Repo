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
    int getDecimalValue(ListNode* head) {
        int answer = 0;
        struct ListNode* temp = head;
        if(head!=NULL){
            do{
                if(temp->val==1&&temp->next!=NULL){
                    answer = (answer + temp->val)*2;
                }
                else if(temp->val==0 && temp->next!=NULL){
                    answer = answer*2;
                }
                if(temp->next==NULL){answer+=temp->val;}
                temp=temp->next;
            }while(temp!=NULL);
        }
        return answer;
    }
};
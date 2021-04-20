
 //Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return head;
        ListNode* temp =head;
        ListNode* prev=nullptr;
        
      while(temp)
      {
          if(temp->val==val)
          {
            if(!prev)//if it is first node the we have to update the head itself
              head=temp->next;
            else 
              prev->next=temp->next;
                
          }
           else
              prev=temp;
             temp=temp->next;  
      }
        return head;
    }
};



//Better Solution is 
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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return NULL;
        while(head->val==val){
            head = head->next;
            if(head==NULL) return NULL;
        }
        ListNode* temp = head;

        while(temp->next!=NULL){
            if(temp->next->val == val){
                temp->next = temp->next->next;
            }else
                temp = temp->next;
        }
        return head;
    }
};

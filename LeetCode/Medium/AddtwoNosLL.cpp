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
    ListNode* insert(ListNode* newNode, int newData)
    {
        newNode = new ListNode(newData);
        return newNode;
    }
    void insertAfter(ListNode* prevNode, int newData)
    {
        ListNode* nextNode = new ListNode(newData);
        nextNode->next = prevNode->next;
        prevNode->next = nextNode;
        
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int num;
        int carry=0;//minati
        ListNode* newNode = NULL;
        bool first = true;
        ListNode* head = NULL;
        
        while(1)
        {
            if(temp1!=NULL&&temp2!=NULL){
                num = temp1->val+temp2->val+carry;
                temp1 = temp1->next;
                temp2 = temp2->next;   
            }
            else if(temp1==NULL&&temp2!=NULL){
                num = temp2->val + carry;
                temp2 = temp2->next;    
            }
            else if(temp2==NULL&&temp1!=NULL){
                num = temp1->val + carry;
                temp1 = temp1->next;
            }
            else 
            {
                if(carry>0)
                {
                    insertAfter(newNode, carry);
                    newNode = newNode->next;
                    break;
                }
                else
                    break;
            }
                
            carry=0;
            if(num>9){carry=1;num=num%10;}
            
            if(first)
            {
                newNode = insert(newNode, num); 
                head = newNode;
                first = false;
            }
            else{
                insertAfter(newNode, num);
                newNode = newNode->next;
            }    
            cout<<newNode->val<<" ";
        }
        return head;
    }
};
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
// Naive solution
// 80% faster 11% less space
class Solution {
public:
    int numComponents(ListNode* head, vector<int>& G) {
        // ListNode* head = head;
        int counter = 0;

        unordered_map<int, int> gElements;
        for(int i=0; i<G.size(); i++){
        	gElements[G[i]]=1;
        }

        bool flag = false;
        while(head){
        	if(gElements[head->val]){
        		if(!flag){
        			counter++;
        			flag = true;
        		}
        	}else{
        		flag=false;
        	}
        	head = head->next;
        }
        return counter;
    }
};
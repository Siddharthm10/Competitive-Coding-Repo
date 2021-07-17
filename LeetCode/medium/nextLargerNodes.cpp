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
// This solution is naive solution 
//  14% better on time , 70% better on space
class Solution {
public:
	int nextLargerNode(ListNode* head){
		ListNode* temp = head;
		int currValue=temp->val;
		while(temp->next!=NULL){
			if(temp->next->val>currValue) 
				return temp->next->val;
			temp = temp->next;
		}
		return 0;
	}

    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* temp = head;
        vector<int>nextLarger;
        while(temp->next!=NULL){
        	nextLarger.push_back(nextLargerNode(temp));
        	temp = temp->next;
        }
        nextLarger.push_back(0);
        return nextLarger;
    }
};

// Better solution is this using stack :https://leetcode.com/problems/next-greater-node-in-linked-list/discuss/833717/C%2B%2B-oror-93-Faster-Time-98-Less-Space
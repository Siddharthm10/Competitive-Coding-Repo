/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
	//for holding the second smallest value
	int secMin = INT_MAX;
	//for holding the smallest value
	int smallest;
	//for holding boolean, whether we found the second
	// smallest or not
	int boolean=false;

	int findSmallest(TreeNode* root){
		if(root==NULL) return INT_MAX;
		return min(root->val, min(findSmallest(root->right),findSmallest(root->left)));
	}

	void findSecondMin(TreeNode* root){
		if(root==NULL) return;
		//value must be in between smallest and the present
		// secMin value
		if(root->val>smallest&&root->val<=secMin){
			secMin = root->val;
			boolean=true;
		}
		findSecondMin(root->left);
		findSecondMin(root->right);

	}

    int findSecondMinimumValue(TreeNode* root) {
        smallest = findSmallest(root);
        findSecondMin(root);
        return (boolean)?secMin:-1;
    }
};
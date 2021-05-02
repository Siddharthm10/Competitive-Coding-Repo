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
	int sum=0;
	
	void calculation(TreeNode* root){
		if(root){
			if(root->left!=NULL&&root->left->left==NULL&&
				root->left->right==NULL) sum+=root->left->val;
			calculation(root->left);
			calculation(root->right);
		}
	}

    int sumOfLeftLeaves(TreeNode* root) {
    	calculation(root);
    	return sum;
	}
};
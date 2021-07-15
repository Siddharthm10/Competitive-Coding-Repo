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
	TreeNode* rightMost(TreeNode* root){
		while(root->right){
			root = root->right;
		}
		return root;
	}
	void storePreVec(TreeNode* root){
		if(root == NULL){
			return;
		}
		if(root->left){
			auto temp = rightMost(root->left);
			temp->right = root->right;
			root->right = root->left;
			root->left = NULL;
		}
		storePreVec(root->left);
		storePreVec(root->right);
	}

	void flatten(TreeNode* root) {
		if(root == NULL){
			return;
		}
		storePreVec(root);
	}
};

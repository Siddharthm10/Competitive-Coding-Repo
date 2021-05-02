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
	bool isPathSum(TreeNode* root, int targetSum){
		if(!root){
        	if(targetSum==0) return true;
        	else return false;
        }
        
        targetSum-=root->val;
        if(root->right!=NULL&&root->left==NULL) return isPathSum(root->right, targetSum);
        else if(root->left!=NULL&&root->right==NULL) return isPathSum(root->left, targetSum);
        else if(root->right==NULL&&root->left==NULL){
        	if(targetSum==0) return true;
        	else return false;
        }
        else{
        	if(!isPathSum(root->right, targetSum)) return isPathSum(root->left, targetSum);
        	else return true;
        }
	}
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL&&targetSum==0) return false;
        return isPathSum(root, targetSum);
    }
};
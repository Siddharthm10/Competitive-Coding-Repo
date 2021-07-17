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
    bool isInverted(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;
        if(isInverted(p->left, q->right) &&
        	isInverted(p->right, q->left)){
        	if(p->val == q->val)
        		return true;
        }
    	return false;
    }
    bool isSymmetric(TreeNode* root) {
        return isInverted(root->right, root->left);
    }
};
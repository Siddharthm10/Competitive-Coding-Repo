/*
 * @lc app=leetcode id=98 lang=cpp
 *
 * [98] Validate Binary Search Tree
 */

// @lc code=start
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
    bool rightHelper(TreeNode* root, int x){
        if(!root) return true;
        if(root->val<=x) return false;
        return (rightHelper(root->left,x) && rightHelper(root->right,x));
    }
    bool leftHelper(TreeNode* root, int x){
        if(!root) return true;
        if(root->val>=x) return false;
        return (leftHelper(root->left, x)&&leftHelper(root->right, x));
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;
        int value = root->val;
        if(!(rightHelper(root->right,value)&&leftHelper(root->left,value)))
            return false;
        else
            return (isValidBST(root->left)&&isValidBST(root->right));
    }
};
// @lc code=end


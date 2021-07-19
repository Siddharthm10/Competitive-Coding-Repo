/*
 * @lc app=leetcode id=99 lang=cpp
 *
 * [99] Recover Binary Search Tree
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
    TreeNode* first=NULL, *second=NULL, *prev=NULL;
    void helper(TreeNode* root){
        if(!root) return;
        helper(root->left);
        if(prev&&root->val<prev->val){
            if(!first) first=prev;
            second=root;
        }
        prev = root;
        helper(root->right);
    }

    void recoverTree(TreeNode* root) {
        if(!root) return;
        helper(root);
        swap(first->val, second->val);
    }
};
// @lc code=end

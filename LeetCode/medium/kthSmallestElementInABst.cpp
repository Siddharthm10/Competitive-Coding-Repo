/*
 * @lc app=leetcode id=230 lang=cpp
 *
 * [230] Kth Smallest Element in a BST
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
    void helper(TreeNode* root, int &idx, int &val, int k){
        if(root==NULL) return;
        if(idx==k) return;
        helper(root->left,idx,val,k);
        if(idx==k) return;
        idx++;
        val = root->val;
        helper(root->right,idx,val,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        int idx=0;
        int val=root->val;
        helper(root,idx,val,k);
        return val;
    }
};
// @lc code=end


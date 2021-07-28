/*
 * @lc app=leetcode id=124 lang=cpp
 *
 * [124] Binary Tree Maximum Path Sum
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

    int helper(TreeNode* root, int& curSum){
        if(!root) return 0;
        int leftSum = max(0,helper(root->left,curSum));
        int rightSum = max(0,helper(root->right, curSum));
        curSum = max(curSum, leftSum+root->val+rightSum);
        return max(root->val+leftSum, root->val+rightSum);
    }
    int maxPathSum(TreeNode* root) {
        if(!root) return 0;
        int curSum = INT_MIN;
        helper(root, curSum);
        return curSum;
    }
};
// @lc code=end


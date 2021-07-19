/*
 * @lc app=leetcode id=653 lang=cpp
 *
 * [653] Two Sum IV - Input is a BST
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
    void helper(TreeNode* root, vector<int> &v){
        if(!root) return;
        helper(root->left,v);
        v.push_back(root->val);
        helper(root->right,v);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        helper(root, v);

        int low=0;
        int high=v.size()-1;
        while(high>low){
            int sum = v[low]+v[high];
            if(sum>k) high--;
            else if(sum<k) low++;
            else return true;
        }
        return false;
    }
};
// @lc code=end


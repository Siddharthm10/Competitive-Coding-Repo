/*
 * @lc app=leetcode id=236 lang=cpp
 *
 * [236] Lowest Common Ancestor of a Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool search(TreeNode* root, TreeNode* x){
        if(!root) return false;
        if(root->val==x->val){return true;}
        else{
            return search(root->right, x)||search(root->left, x);
        }
    }
    void helper(TreeNode* root, TreeNode* p, TreeNode* q, TreeNode* &ans){
        if(!root) return;
        helper(root->left,p,q,ans);
        helper(root->right,p,q,ans);
        if(search(root,p) && search(root,q)){
            if(ans==NULL)
                ans=root;
            return;
        }
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans = NULL;
        helper(root, p, q, ans);
        return ans;
    }
};
// @lc code=end


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
    int accumulate(vector<string> p)
    {
        int ans = 0;
        for(int i=0; i<p.size(); i++)
        {
            ans += stoi(p[i]);
        }
        return ans;
    }
    void findAllInts(TreeNode* root,vector<string> &p, string ans)
    {
        if(root==NULL) return;
        
        ans += to_string(root->val);
        if(!root->right && !root->left){
            p.push_back(ans);
        }
        findAllInts(root->left, p, ans);
        findAllInts(root->right, p, ans);
    }
    int sumNumbers(TreeNode* root) {
        vector<string> p;
        string ans;
        findAllInts(root, p, ans);
        return accumulate(p);
    }
};
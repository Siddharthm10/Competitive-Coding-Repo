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
    map<string, int> counter;
    string helper(TreeNode* root, vector<TreeNode*> &res){
        if(!root) return "";
        string str = "(";
        str += helper(root->left,res);
        str += to_string(root->val);
        str += helper(root->right,res);
        str += ")";
        
        if(counter[str]==1)
            res.push_back(root);
        
        counter[str]++;
        
        return str;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*> res;
        helper(root, res);
        return res;
    }
};

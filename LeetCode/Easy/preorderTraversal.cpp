class Solution {
public:
    void preorderUtil(TreeNode* root, vector<int> &a)
    {
        if(root==NULL) return;
        a.push_back(root->val);
        preorderUtil(root->left, a);
        preorderUtil(root->right, a);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> a;
        preorderUtil(root, a);
        return a;
    }
};

class Solution {
public:
    void inorderUtil(TreeNode* root, vector<int> &a)
    {
        if(root==NULL) return;
        inorderUtil(root->left,a);
        a.push_back(root->val);
        inorderUtil(root->right,a);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> a;
        inorderUtil(root, a);
        return a;
    }
};

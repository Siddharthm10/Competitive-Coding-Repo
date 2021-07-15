class Solution {
public:
    void postOrderUtil(TreeNode* root, vector<int> &a)
    {
        if(root==NULL) return;
        postOrderUtil(root->left, a);
        postOrderUtil(root->right, a);
        a.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> a;
        postOrderUtil(root, a);
        return a;
    }
};

class Solution {
    int tilt=0;
    int findSum(TreeNode* root)
    {
        if(!root) return 0;
        int l = findSum(root->left);
        int r = findSum(root->right);
        tilt = tilt + abs(l - r);
        return l+r+root->val;
    }
    
    
public:
    int findTilt(TreeNode* root) {
        tilt=0;
        findSum(root);
        return tilt;
    }
};

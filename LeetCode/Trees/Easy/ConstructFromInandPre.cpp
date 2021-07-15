class Solution {
public:
    int idx = 0;
    int find(vector<int> v,int t,int start,int end)
    {
        for(int i=start;i<=end;i++)
        {
            if(v[i]==t)
                return i;
        }
        
        return -1;
    }
    TreeNode* buildTreeUtil(vector<int>& preorder, vector<int>& inorder, int start, int end)
    {
        if(end<start) return NULL;
        int rootValue = preorder[idx];
        idx++;
        TreeNode* root = new TreeNode(rootValue);
        
        if(start==end) return root;
        int rootNodeIndex = find(inorder, rootValue, start, end);
        

        root->left = buildTreeUtil(preorder, inorder, start, rootNodeIndex-1);
        root->right = buildTreeUtil(preorder, inorder, rootNodeIndex+1, end);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode* root = buildTreeUtil(preorder, inorder, 0, inorder.size()-1);
        return root;
    }
};

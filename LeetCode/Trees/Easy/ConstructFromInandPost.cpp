class Solution {
public:

    int find(vector<int> v, int x, int start, int end){
        for(int i=start; i<=end; i++){
            if(v[i]==x) return i;
        }
        return -1;
    }
    
    TreeNode* help(vector<int>& inorder, vector<int>& postorder, int start, int end, int &idx){
        if(end<start) return NULL;
        int rootVal = postorder[idx];
        idx--;
        TreeNode* root = new TreeNode(rootVal);
        if(start==end) return root;
        
        int indexRoot = find(inorder, rootVal, start, end);
        
        root->right = help(inorder, postorder, indexRoot+1, end, idx);
        root->left = help(inorder, postorder, start, indexRoot-1, idx);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int idx = postorder.size()-1;
        TreeNode* root = help(inorder, postorder, 0, postorder.size()-1, idx);
        return root;
    }
};

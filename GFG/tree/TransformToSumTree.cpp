class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int helper(Node* root){
        if(!root) return 0;
        
        int data = root->data;
        root->data = helper(root->left)+helper(root->right);
        if(root->right) root->data += root->right->data;
        if(root->left) root->data += root->left->data;
        return data;
    }
    void toSumTree(Node *node)
    {
        // Your code here
        if(!node) return;
        
        helper(node);
    }
}


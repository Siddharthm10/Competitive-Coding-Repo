class Solution{
  public:
    /*You are required to complete this method*/

    int minDepth(Node *root) {
      // Your code here
      if(root==NULL) return 0;

      if(root->right==NULL && root->left==NULL) return 1;
      else{
        if(root->right==NULL)
          return 1+minDepth(root->left);
        else if(root->left==NULL)
          return 1+minDepth(root->right);
      }
      return 1+min(minDepth(root->right), minDepth(root->left));

    }
};
class Solution{
  public:
    // Return True if the given trees are isomotphic. Else return False.
    bool isIsomorphic(Node *root1,Node *root2)
    {
        if(!root1&&!root2) return true;
        if(!root1||!root2) return false;
        if(root1->data==root2->data){
            if(isIsomorphic(root1->left, root2->left)&&isIsomorphic(root1->right,root2->right))
                return true;
            else {
                Node* temp = root1->left;
                root1->left = root1->right;
                root1->right = temp;
                return isIsomorphic(root1->left, root2->left)&&isIsomorphic(root1->right,root2->right);
            }
        }
        return false;
    }
};

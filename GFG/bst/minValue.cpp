//Function to find the minimum element in the given BST.
int minValue(Node* root)
{
    // Code here
    if(root->left==NULL) return root->data;
    minValue(root->left);
}


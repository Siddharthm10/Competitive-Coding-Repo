/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution
{
public:

    int findMax(Node *root)
    {
        //code here
        if(root==NULL) return INT_MIN;
        
        int x = root->data;
        int lx = findMax(root->left);
        int rx = findMax(root->right);
        
        x = max(x,max(lx,rx));
        return x;
        
    }
    int findMin(Node *root)
    {
        //code here
        if(root==NULL) return INT_MAX;
        
        int x = root->data;
        int lx = findMin(root->left);
        int rx = findMin(root->right);
        
        x = min(x,min(lx,rx));
        return x;
    }
};


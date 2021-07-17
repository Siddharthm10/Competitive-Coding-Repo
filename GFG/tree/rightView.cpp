struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should return  right view of tree
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       if(!root) return {};
       
       queue<Node*> q;
       vector<int> v;
       
       q.push(root);
       while(!q.empty())
       {
            int n = q.size();
            for(int i=0; i<n; i++){
                Node* temp = q.front();
                q.pop();
                if(i==n-1) v.push_back(temp->data);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
       }
       return v;
    }
};

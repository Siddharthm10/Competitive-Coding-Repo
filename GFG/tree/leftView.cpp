/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   // Your code here
   if(!root) return {};
   
   queue<Node*> q;
   vector<int> v;

    q.push(root);
    while(!q.empty())
    {
        int n = q.size();
        for(int i=1; i<=n; i++)
        {
            Node* temp = q.front();
            q.pop();
            if(i==1) v.push_back(temp->data);
            
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
    return v;
}

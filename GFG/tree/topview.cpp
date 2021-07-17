
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        if(root==NULL) return {};
        
        queue<pair<Node*, int>> q;
        stack<int> left;
        queue<int> right;
        vector<int> v;
        
        int hd=0, l=0, r=0;
        q.push(make_pair(root,0));
        while(!q.empty())
        {
            Node* temp = q.front().first;
            hd = q.front().second;
            q.pop();
            
            if(hd<l)
            {
                left.push(temp->data);
                l = hd;
            }
            else if(hd>r)
            {
                right.push(temp->data);
                r = hd;
            }
            if(temp->left) q.push(make_pair(temp->left, hd-1));
            if(temp->right) q.push(make_pair(temp->right,hd+1));
        }
        
        while(!left.empty())
        {
            v.push_back(left.top());
            left.pop();
        }
        
        v.push_back(root->data);
        
        while(!right.empty())
        {
            v.push_back(right.front());
            right.pop();
        }
        return v;
    }

};

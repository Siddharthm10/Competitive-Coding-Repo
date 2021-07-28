class Solution
{
    public:
    
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        //Your code here
        if(!root) return {};
        map<int, vector<int>> m;
        vector<int> ans;
        queue<pair<Node*,int>> q;//val, hd
        q.push({root, 0});
        while(!q.empty()){
            Node* node = q.front().first;
            int hd = q.front().second;
            m[hd].push_back(node->data);
            q.pop();
            if(node->left) q.push({node->left, hd-1});
            if(node->right) q.push({node->right, hd+1});
        }
        
        for(auto it:m){
            for(auto a:it.second){
                ans.push_back(a);
            }
        }
        return ans;
    }
};

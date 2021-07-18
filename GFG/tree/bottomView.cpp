class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        if(!root) return {};
        map<int, int> m;
        queue<pair<Node*,int>> q;
        
        int hd=0, l=0, r=0;
        q.push(make_pair(root, hd));
        while(!q.empty()){
            auto temp = q.front();
            auto node = temp.first;
            auto hd = temp.second;
            q.pop();
            m[hd] = node->data;
            if(node->left) q.push(make_pair(node->left,hd-1));
            if(node->right) q.push(make_pair(node->right,hd+1));
        }
        
        vector<int> v;
        for(auto x:m){
            v.push_back(x.second);
        }
        return v;
    }
};

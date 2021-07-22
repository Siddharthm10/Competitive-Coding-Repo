/*   
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
vector<int> reverseLevelOrder(Node *root)
{
    // code here
    if(!root) return {};
    map<int, vector<int>> m;//lvl, val/
    queue<pair<Node*, int>> q;//Node* lvl
    vector<int> ans;
    q.push(make_pair(root,0));
    while(!q.empty()){
        Node* temp = q.front().first;
        int lvl = q.front().second;
        q.pop();
        m[lvl].push_back(temp->data);
        if(temp->left) q.push(make_pair(temp->left, lvl+1));
        if(temp->right) q.push(make_pair(temp->right, lvl+1));
    }
    for (auto iter = m.rbegin(); iter != m.rend(); ++iter) {
        for(int i=0; i<iter->second.size(); i++)
            ans.push_back(iter->second[i]);
    }
    return ans;
}

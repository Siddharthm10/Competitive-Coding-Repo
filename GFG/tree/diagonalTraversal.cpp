void helper(Node* root, int lvl, map<int, vector<int>> &m){
    if(!root) return;
    m[lvl].push_back(root->data);
    helper(root->left, lvl+1, m);
    helper(root->right,  lvl, m);
}
vector<int> diagonal(Node *root)
{
   // your code herei
   int lvl = 0;
   map<int, vector<int>> m;//lvlR, val, lvlH
   helper(root, lvl, m);
   vector<int> ans;
   for(auto x: m){
       for(int i=0; i<x.second.size(); i++){
           ans.push_back(x.second[i]);
       }
   }
   return ans;
}

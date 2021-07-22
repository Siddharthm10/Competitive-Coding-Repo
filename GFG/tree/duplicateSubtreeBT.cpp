class Solution {
  public:
    /*This function returns true if the tree contains 
    a duplicate subtree of size 2 or more else returns false*/
    bool ans = false;
    string helper(Node* root, map<string, int>& m){
        if(!root) return "";
        string str = "(";
        str+=helper(root->left,m);
        str+=to_string(root->data);
        str+=helper(root->right, m);
        str+=")";
        if(m[str]==1&&str.length()>=4) ans = true;
        m[str]++;
        return str;
    }
    int dupSub(Node *root) {
         // code here
        if(!root) return 0;
        map<string, int> m;
        string str;
        helper(root, m);
        return ans;
    }
};

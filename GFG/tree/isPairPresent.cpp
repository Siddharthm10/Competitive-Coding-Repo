
class Solution{
  public:
    // root : the root Node of the given BST
    // target : the target sum
    void helper(Node* root, vector<int> &v){
        if(!root) return;
        helper(root->left,v);
        v.push_back(root->data);
        helper(root->right,v);
    }
    int isPairPresent(struct Node *root, int target)
    {
        //add code here.
        vector<int> v;
        helper(root, v);
        
        int low = 0, high = v.size()-1;
        while(high>low){
            int sum = v[low]+v[high];
            if(sum<target) low++;
            else if(sum>target) high--;
            else return 1;
        }
        return 0;
    }
};

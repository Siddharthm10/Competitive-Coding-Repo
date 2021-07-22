/*
structure of the node of the binary tree is as
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
    pair<int, int> helper(Node* root){
        if(!root)  return make_pair(0,0);
        auto lp = helper(root->left);
        auto rp = helper(root->right);
        if(lp.first>rp.first) return make_pair(lp.first+1, lp.second+root->data);
        else if(lp.first<rp.first) return make_pair(rp.first+1, rp.second+root->data);
        else {
            if(lp.second>rp.second) return make_pair(lp.first+1, lp.second+root->data);
            else return make_pair(rp.first+1, rp.second+root->data);
        }
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        if(!root) return 0;
        pair<int,int> ans = helper(root);// height, sum
        return ans.second;
    }
};



// Solution given
void sumOfLongRootToLeafPath(Node* root, int sum,
                      int len, int& maxLen, int& maxSum)
{
    // if true, then we have traversed a
    // root to leaf path
    if (!root) {
        // update maximum length and maximum sum
        // according to the given conditions
        if (maxLen < len) {
            maxLen = len;
            maxSum = sum;
        } else if (maxLen == len && maxSum < sum)
            maxSum = sum;
        return;
    }
 
    // recur for left subtree
    sumOfLongRootToLeafPath(root->left, sum + root->data,
                            len + 1, maxLen, maxSum);
 
    // recur for right subtree
    sumOfLongRootToLeafPath(root->right, sum + root->data,
                            len + 1, maxLen, maxSum);
}
 

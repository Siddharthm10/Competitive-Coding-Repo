/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
	vector<string> res;
	void constructString(TreeNode* root, string temp){
		if(!root->left && !root->right){
			res.push_back(temp+to_string(root->val));
			return;
		}
		else if(!root->left){
			temp += to_string(root->val)+"->";
			constructString(root->right, temp);
		}
		else if(!root->right){
			temp += to_string(root->val)+"->";
			constructString(root->left, temp);
		}else{
			temp += to_string(root->val)+"->";
			constructString(root->right, temp);
			constructString(root->left, temp);
		}
	}

    vector<string> binaryTreePaths(TreeNode* root) {
        constructString(root, "");
        return res;
    }
};
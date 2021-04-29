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
	int findDegree(TreeNode* root, int x, int &xParent, int degree){
		if(!root) return 0;
		if(root->val==x) {
			return degree;
		}

		xParent = root->val;

		int a = findDegree(root->left, x, xParent, degree+1);
		if(a) return a;
		xParent = root->val;
        
		a = findDegree(root->right, x, xParent, degree+1);
		return a;
	}

    bool isCousins(TreeNode* root, int x, int y) {
    	int xParent = -1;
    	int a = findDegree(root, x, xParent, 0);
    	int yParent = -1;
        int b=findDegree(root, y, yParent, 0);
        // cout<<xParent<<" "<<a<<" "<<yParent<<" "<<b;
        
        if(a==b&&xParent!=yParent) return true;
        return false;
    }
};	
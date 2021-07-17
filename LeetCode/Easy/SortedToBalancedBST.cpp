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
	TreeNode* conversion(vector<int> &nums, int start, int end){
		if(start<=end){
			int middle = start + (end - start)/2;
			TreeNode* root = new TreeNode(nums[middle]);
			root->left = conversion(nums, start, middle-1);
			root->right = conversion(nums, middle+1, end);
			return root;
		}
	}

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return conversion(nums, 0, nums.size()-1);
    }
};

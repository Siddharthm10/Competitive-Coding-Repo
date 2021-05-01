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
	TreeNode* construct(vector<int> &nums, int l, int r){
		if(r>l){
			int middle = (r+l)/2 -l;
	        TreeNode* root = new TreeNode(nums[middle]);
	        root->right = construct(nums, middle+1, r);
	        root->left = construct(nums, l, middle-1);
	        return root;
		}
		return NULL;
	}
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        //Choose the middle of the sorted array
        //Using binary search's concept ;-)
        return construct(nums, 0, nums.size()-1);
    }
};
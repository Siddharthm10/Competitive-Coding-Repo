//This is not a solution by me:
// TODO: 
// - [ ] Understand Morris-inorder traversal

class Solution {
	void inorder(TreeNode* root, bool getlist){
		while (root) {
			if (root -> left) {
				TreeNode* pre = root -> left;
				while (pre -> right && pre -> right != root) {
					pre = pre -> right;
				}
				if (!pre -> right) {
					pre -> right = root;
					root = root -> left;
				} else {
					pre -> right = NULL;
					
					if(prev && prev->val==root->val)
						currCount++;
					else
						currCount=1;

					if(!getlist) maxCount = max(maxCount, currCount);
					else if(currCount==maxCount) ans.push_back(root->val);

					prev = root;
					root = root -> right;
				}
			} else {

				if(prev && prev->val==root->val)
					currCount++;
				else
					currCount=1;

				if(!getlist) maxCount = max(maxCount, currCount);
				else if(currCount==maxCount) ans.push_back(root->val);

				prev = root;
				root = root -> right;
			}
		}
	}
public:
	int maxCount = INT_MIN;
	int currCount = 0;
	TreeNode* prev = NULL;
	vector<int> ans;

	vector<int> findMode(TreeNode* root) {
		ans.clear();
		if(!root) return ans;

    // Get the maxCount size
		inorder(root, false);

     // Get the final list
		prev = NULL;
		currCount = 0;
		inorder(root, true);

		return ans;
	}
};
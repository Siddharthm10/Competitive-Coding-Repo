/*
 * @lc app=leetcode id=152 lang=cpp
 *
 * [152] Maximum Product Subarray
 */

// @lc code=start
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int res = nums[0];
        int maxProd = nums[0];
        int minProd = nums[0];
        for(int i=1; i<n; i++){
            int cur1 = nums[i] * maxProd;
            int cur2 = nums[i] * minProd;
            maxProd = max({nums[i], cur1, cur2});
            minProd = min({nums[i], cur1, cur2});
            res = max(maxProd, res);
        }
        return res;
    }
};
// @lc code=end


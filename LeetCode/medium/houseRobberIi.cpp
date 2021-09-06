/*
 * @lc app=leetcode id=213 lang=cpp
 *
 * [213] House Robber II
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        int dpFirst[n];
        dpFirst[0] = 0;
        dpFirst[1] = nums[0];
        for(int i=2; i<n; i++){
            dpFirst[i] = max(dpFirst[i-1], dpFirst[i-2]+nums[i-1]);
        }

        int dpLast[n];
        dpLast[0]=0;
        dpLast[1]=nums[1];
        for(int i=3; i<=n; i++){
            dpLast[i-1] = max(dpLast[i-2], dpLast[i-3]+nums[i-1]);
        }
        return max(dpFirst[n-1], dpLast[n-1]);
    }
};
// @lc code=end


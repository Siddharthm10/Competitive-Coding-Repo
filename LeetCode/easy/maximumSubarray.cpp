/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result=nums[0],sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(result<sum) result=sum;
            if(sum<0) sum=0;
        }
        return result;
        
    }
};
// @lc code=end


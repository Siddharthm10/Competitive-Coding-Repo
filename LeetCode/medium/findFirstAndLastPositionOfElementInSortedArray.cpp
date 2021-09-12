/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1,-1}; 
        int maxI = upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;
        int minI = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        if(minI<nums.size() and nums[minI]==target) return {minI, maxI};
        else return {-1,-1};
    }
};
// @lc code=end


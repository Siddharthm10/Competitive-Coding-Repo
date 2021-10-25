/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return {};
        vector<vector<int>> triplets;

        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            if(i==0||nums[i]!=nums[i-1]){
                int start = i+1, end = n-1, sum = -1*nums[i];
                while(start<end){
                    if(nums[start]+nums[end]==sum){
                        triplets.push_back({nums[i],nums[start], nums[end]});

                        while(start<end && nums[start]==nums[start+1]) start++;
                        while(start<end && nums[end]==nums[end-1]) end--;
                        start++;end--;
                    }
                    else if(nums[start]+nums[end]<sum){
                        start++;
                    }else{
                        end--;
                    }
                }
            }
        }
        return triplets;
    }
};
// @lc code=end


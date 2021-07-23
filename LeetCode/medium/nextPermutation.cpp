/*
 * @lc app=leetcode id=31 lang=cpp
 *
 * [31] Next Permutation
 */

// @lc code=start
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()<=1) return;
        for(int i=nums.size()-2; i>=0; i--)
        {
            if(nums[i]<nums[i+1]){
                for(int j=nums.size()-1; j>=0; j--){
                    if(nums[i]<nums[j]){
                        swap(nums[i],nums[j]);
                        break;
                    }
                }
                sort(nums.begin()+i+1, nums.end());
                return;
            }
        }
        reverse(nums.begin(), nums.end());
        return;
    }
};
// @lc code=end


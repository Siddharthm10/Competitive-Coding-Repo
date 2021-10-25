/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i=0, j=1;
        if(n==1) return;
        for(; i<n&&j<n;){
            if(nums[i]==0){
                if(nums[j]==0){
                    j++;
                }
                else{
                    swap(nums[i], nums[j]);
                }
            }
            else{
                i++; j++;
            }
        }
    }
};
// @lc code=end


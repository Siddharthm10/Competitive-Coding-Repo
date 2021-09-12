/*
 * @lc app=leetcode id=162 lang=cpp
 *
 * [162] Find Peak Element
 */

// @lc code=start
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = n-1, middle;
        if(n==1) return 0;
        if(n==2) {
            if(nums[1]>nums[0])
                return 1;
            else 
                return 0;
        }
        while(end>=start){
            middle = start + (end-start)/2;
            if(middle==0){
                if(nums[middle]>nums[middle+1]) return 0;
                else{
                    start = middle+1;
                    continue;
                }
            }

            if(middle==n-1){
                if(nums[middle]>nums[middle-1]) return middle;
                else{
                    end = middle-1;
                    continue;
                }
            }

            if(nums[middle]>nums[middle+1] && nums[middle]>nums[middle-1]) return middle;
            else if(nums[middle]<nums[middle+1] && nums[middle]>nums[middle-1]) start = middle+1;
            else end = middle-1;
        }
        return -1;
    }
};
// @lc code=end


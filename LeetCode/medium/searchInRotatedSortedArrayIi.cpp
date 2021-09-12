/*
 * @lc app=leetcode id=81 lang=cpp
 *
 * [81] Search in Rotated Sorted Array II
 */

// @lc code=start
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size(); 
        int start = 0;
        int end = n-1;
        int middle;

        while(start<=end){
            middle = start + (end-start)/2;
            if(nums[middle]==target) return true;
            if(nums[start]==nums[middle] && nums[end]==nums[middle]){
                while(start<=end && nums[start]==nums[middle] && nums[end]==nums[middle]){
                    start++;
                    end--;
                }                
            }
            else if(nums[middle]>=nums[start]){
                if(nums[middle]<target) start = middle+1;
                else{
                    if(nums[start]>target) start = middle+1;
                    else if(nums[start]<target) end = middle-1;
                    else return true;
                }
            } else{
                if(nums[middle]>target) end = middle-1;
                else {
                    if(nums[end]<target) end = middle-1;
                    else if(nums[end]>target) start = middle+1;
                    else return true;
                }
            }
        }
        return false;
    }
};
// @lc code=end


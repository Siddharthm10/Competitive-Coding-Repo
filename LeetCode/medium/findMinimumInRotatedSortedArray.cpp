/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0, end = nums.size()-1;
        int middle;
        int minVal = INT_MAX;
        while(start<=end){
            middle = start + (end - start)/2;
            if(nums[start]<=nums[middle]){
                minVal = min(minVal, nums[start]);
                start = middle+1;
            } else{
                end = middle;
            }
        }        
        return minVal;
    }
};
// @lc code=end

/*
[3,1,2]
[3,1]
[4,5,6,7,0,1,2]
[3,4,5,1,2]
*/
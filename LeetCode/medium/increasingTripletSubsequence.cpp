/*
 * @lc app=leetcode id=334 lang=cpp
 *
 * [334] Increasing Triplet Subsequence
 */

// @lc code=start
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        int rightMax[n];
        rightMax[n-1] = nums[n-1];
        for(int i=n-2; i>=0; i--){
            rightMax[i] = max(rightMax[i+1], nums[i]);
        }
        int leftMin[n];
        leftMin[0] = nums[0];
        for(int i=1; i<n; i++){
            leftMin[i] = min(leftMin[i-1], nums[i]);
        }

        for(int i=1; i<n-1; i++){
            if(nums[i]>leftMin[i-1]&&nums[i]<rightMax[i+1]) return 1;
        }
        return 0;
    }
};
// @lc code=end


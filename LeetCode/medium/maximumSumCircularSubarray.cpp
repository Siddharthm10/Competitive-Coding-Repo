/*
 * @lc app=leetcode id=918 lang=cpp
 *
 * [918] Maximum Sum Circular Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int totalSum = nums[0];
        int curMax = nums[0], curMin = nums[0];
        int maxi = nums[0], mini = nums[0];
        for(int i=1; i<n; i++){
            totalSum += nums[i];
            curMax = max(nums[i], curMax+nums[i]);
            curMin = min(nums[i], curMin+nums[i]);
            maxi = max(curMax, maxi);
            mini = min(curMin, mini);
        }
        return maxi<0?maxi:max(maxi, totalSum-mini);
    }
};
// @lc code=end

/*
TLE 109/110 :(
        int n = nums.size();
        for(int i=0; i<n; i++){
            nums.push_back(nums[i]);
        }
        int maxSum = INT_MIN;
        for(int i=0; i<n; i++){
            int curSum = 0;
            for(int j=i; j<i+n; j++){
                curSum += nums[j];
                if(curSum>maxSum){
                    maxSum = curSum;
                }
                if(curSum<0) break;
            }
        }
        return maxSum;
*/
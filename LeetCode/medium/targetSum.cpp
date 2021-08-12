/*
 * @lc app=leetcode id=494 lang=cpp
 *
 * [494] Target Sum
 */

// @lc code=start
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        int numzero=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            if(nums[i]==0) numzero++;
        }
        // 2*subSum - sum = target
        if(sum<target||(sum+target)%2==1) return 0;
        int subSum = (target+sum)/2;
        vector<vector<int>> dp(nums.size()+1, vector<int>(subSum+1, 0));
        for(int i=0; i<=nums.size(); i++){
            for(int j=0; j<=subSum; j++){
                if(i==0||j==0){
                    if(i==0) dp[i][j]=0;
                    if(j==0) dp[i][j]=1;
                    continue;
                }
                if(nums[i-1] == 0)
                    dp[i][j] = dp[i-1][j];

                else if(nums[i-1]<=j){
                    dp[i][j] = dp[i-1][j]+dp[i-1][j-nums[i-1]];
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[nums.size()][subSum]*pow(2,numzero);
    }
};
// @lc code=end


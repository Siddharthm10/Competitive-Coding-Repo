/*
 * @lc app=leetcode id=416 lang=cpp
 *
 * [416] Partition Equal Subset Sum
 */

// @lc code=start
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
        }
        if(sum%2==1) return false;
        sum = sum/2; //target Sum

        bool dp[nums.size()+1][sum+1];
        for(int i=0; i<nums.size()+1; i++){
            for(int j=0; j<sum+1; j++){
                if(i==0||j==0) {
                    if(i==0) dp[i][j]=false;
                    if(j==0) dp[i][j]=true;
                    continue;
                }
                if(nums[i-1]>j){
                    dp[i][j] = dp[i-1][j];
                }
                else{
                    dp[i][j] = dp[i-1][j-nums[i-1]]||dp[i-1][j];
                }
            }
        }
        return dp[nums.size()][sum];
    }
};
// @lc code=end


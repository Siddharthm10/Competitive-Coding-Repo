/*
 * @lc app=leetcode id=746 lang=cpp
 *
 * [746] Min Cost Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int minCost = 0;
        int n = cost.size();
        if(n==2) return min(cost[0], cost[1]);
        int dp[n+1];
        dp[0] = 0;
        dp[1] = 0;
        dp[2] = min(cost[0], cost[1]);
        
        for(int i=3; i<=n; i++){
            dp[i] = min(dp[i-1]+cost[i-1], dp[i-2]+cost[i-2]);
        }
        return dp[n];
    }
};
// @lc code=end
/* 
time 8ms
int minCostClimbingStairs(vector<int>& cost) {
    int n = cost.size();
    if(n==0||n==1) return min(cost[0],cost[1]);
    int dp[n+1];
    dp[0] = cost[0];
    dp[1] = cost[1];
    for(int i=2; i<n; i++){
        dp[i] = cost[i] + min(dp[i-1],dp[i-2]);
    }
    dp[n] = min(dp[n-1], dp[n-2]);
    return dp[n];
}

*/

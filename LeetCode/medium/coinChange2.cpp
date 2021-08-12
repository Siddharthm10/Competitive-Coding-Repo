/*
 * @lc app=leetcode id=518 lang=cpp
 *
 * [518] Coin Change 2
 */

// @lc code=start
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size()+1, vector<int>(amount+1));
        for(int i=0; i<=coins.size(); i++){
            for(int j=0; j<=amount; j++){
                if(i==0||j==0){
                    if(i==0) dp[i][j] = 0;
                    if(j==0) dp[i][j] = 1;
                    continue;
                }
                if(coins[i-1]<=j){
                    dp[i][j] = dp[i-1][j]+dp[i][j-coins[i-1]];
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[coins.size()][amount];
    }
};
// @lc code=end


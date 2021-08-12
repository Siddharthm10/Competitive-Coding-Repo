/*
 * @lc app=leetcode id=322 lang=cpp
 *
 * [322] Coin Change
 */

// @lc code=start
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> dp(coins.size()+1, vector<int>(amount+1));
        for(int i=0; i<=coins.size(); i++){
            dp[i][0] = 0;
        }
        for(int j=0; j<=amount; j++){
            dp[0][j] = INT_MAX-1;
        }
        for(int j=1; j<=amount; j++){
            if(j%coins[0]==0){
                dp[1][j] = j/coins[0];
            }
            else
                dp[1][j] = INT_MAX-1;
        }
        for(int i=2; i<=coins.size(); i++){
            for(int j=1; j<=amount; j++){
                if(coins[i-1]<=j){
                    dp[i][j] = min(dp[i-1][j], dp[i][j-coins[i-1]]+1);
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        if(dp[coins.size()][amount]>INT_MAX-2) return -1;
        return dp[coins.size()][amount];
    }
};
// @lc code=end


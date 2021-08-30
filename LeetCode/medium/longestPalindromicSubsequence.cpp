/*
 * @lc app=leetcode id=516 lang=cpp
 *
 * [516] Longest Palindromic Subsequence
 */

// @lc code=start
class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string r(s);
        reverse(r.begin(), r.end());
        int len = s.length();
        int dp[len+1][len+1];
        memset(dp, 0, sizeof(dp));
        for(int i=1; i<=len; i++){
            for(int j=1; j<=len; j++){
                if(s[i-1]==r[j-1])
                    dp[i][j] = 1+dp[i-1][j-1];
                else   
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[len][len];
    }
};
// @lc code=end


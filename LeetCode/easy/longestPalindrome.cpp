/*
 * @lc app=leetcode id=409 lang=cpp
 *
 * [409] Longest Palindrome
 */

// @lc code=start
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        for(int i=0; i<s.length(); i++){
            mp[s[i]]++;
        }        
        int biggestOddele = 0;
        int res = 0;
        for(auto x : mp){
            if(x.second%2 == 0){
                res+=x.second;
            }
            else {
                res+=x.second-1;
                biggestOddele = max(x.second, biggestOddele);
            }
        }
        res += (biggestOddele>0)?1:0;
        return res;
    }
};
// @lc code=end


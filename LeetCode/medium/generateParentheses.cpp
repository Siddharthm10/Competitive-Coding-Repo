/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */

// @lc code=start
class Solution {
public:
    void helper(vector<string> &ans, string &comb,
                int open, int close){
        if(open==0 && close==0){
            ans.push_back(comb);
            return;
        }
        if(open){
            comb.push_back('(');
            helper(ans, comb, open-1, close);
            comb.pop_back();
        }
        if(open<close && close>0){
            comb.push_back(')');
            helper(ans, comb, open, close-1);
            comb.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string comb = "";
        int open = n;
        int close = n;

        helper(ans, comb, open, close);
        return ans;
    }
};
// @lc code=end


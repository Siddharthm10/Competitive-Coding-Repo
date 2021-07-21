/*
 * @lc app=leetcode id=51 lang=cpp
 *
 * [51] N-Queens
 */

// @lc code=start
class Solution {
public:
    bool isPoss(int row, int col, int n, vector<string> comb){
        //vertical
        for(int i=row-1; i>=0; i--){
            if(comb[i][col]=='Q') return false;
        }
        for(int i=row-1,j=col-1; i>=0&&j>=0; i--, j--){
            if(comb[i][j]=='Q') return false;
        }
        for(int i=row-1, j=col+1; i>=0&&j<n; i--,j++){
            if(comb[i][j]=='Q') return false;
        }
        return true;
    }
    void helper(vector<vector<string>> &ans, vector<string> &comb,
                int n, int row){
        if(row==n){
            ans.push_back(comb);
            return;
        }
        for(int i=0; i<n; i++){
            if(isPoss(row, i, n, comb)){
                comb[row][i]='Q';
                helper(ans, comb, n, row+1);
                comb[row][i]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> comb(n,"");
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++)
                comb[i].push_back('.');
        }
        helper(ans, comb, n, 0);
        return ans;
    }
};
// @lc code=end


/*
 * @lc app=leetcode id=79 lang=cpp
 *
 * [79] Word Search
 */

// @lc code=start
class Solution {
public:
    bool dfs(vector<vector<char>>&board, string word, 
             pair<int,int> curr, int idx){

        if(idx==word.size()) return true;

        // Edge cases
        if(curr.first==board.size() || curr.second==board[0].size() ||
           curr.first<0 || curr.second<0)
           return false;
        
        if(board[curr.first][curr.second]=='#') return false;
        
        char temp = board[curr.first][curr.second];
        int flag = 0;
        // printBoard(board);
        if(temp==word[idx]){
            board[curr.first][curr.second] = '#';
            flag = dfs(board, word, {curr.first, curr.second+1}, idx+1) ||
                   dfs(board, word, {curr.first, curr.second-1}, idx+1) ||
                   dfs(board, word, {curr.first+1, curr.second}, idx+1) ||
                   dfs(board, word, {curr.first-1, curr.second}, idx+1);
            board[curr.first][curr.second] = temp;
        }
        return flag;

    }
    void static printBoard(vector<vector<char>>& board){
        // print board
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                cout<<board[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    bool exist(vector<vector<char>>& board, string word) {
        vector<pair<int,int>> possibleStarts;
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                if(board[i][j]==word[0])
                    possibleStarts.push_back({i,j});
            }
        }
        for(int i=0; i<possibleStarts.size(); i++){        
            if(dfs(board, word, possibleStarts[i], 0))
                return true;
        }
        // printBoard(board);
        return false;
    }
};
// @lc code=end


/*
 * @lc app=leetcode id=240 lang=cpp
 *
 * [240] Search a 2D Matrix II
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int startIdxC = n-1;
        int startIdxR = 0;
        while(startIdxC>=0 && startIdxR<m){
            if(target>matrix[startIdxR][startIdxC]){
                startIdxR++;
            } else if(target<matrix[startIdxR][startIdxC]){
                startIdxC--;
            }else return 1;
        }
        return 0;
    }
};
// @lc code=end


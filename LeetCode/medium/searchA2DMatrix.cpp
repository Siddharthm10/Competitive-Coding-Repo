/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution {
public:
    int binarySearch(vector<int>& row, int target){
        int start=0, end=row.size()-1;
        int middle;
        while(start<=end){
            middle = start+(end-start)/2;
            if(row[middle]==target){
                return middle;
            }else if(row[middle]>target){
                end = middle-1;
            }else{
                start = middle+1;
            }
        }
        return -1;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start = 0;
        int end = matrix.size()-1;
        int middle;
        while(start<=end){
            int middle = start + (end-start)/2;
            if(matrix[middle][0]>target){
                end = middle-1;
            } else if (matrix[middle][0]<target){
                if(matrix[middle][matrix[middle].size()-1]>=target){
                    int found = binarySearch(matrix[middle], target);
                    if(found!=-1) return true;
                }
                start = middle+1;
            }else{
                return true;
            }
        }
        return false;
        /* ____ALGO____
        lower bound for first column
        lower bound for rows starting from those first column
        with matrix[i][0]<target and matrix[i][matrix.size()-1]>target
        */
    }
};
// @lc code=end


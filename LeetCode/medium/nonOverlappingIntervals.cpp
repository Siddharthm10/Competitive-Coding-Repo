/*
 * @lc app=leetcode id=435 lang=cpp
 *
 * [435] Non-overlapping Intervals
 */

// @lc code=start
class Solution {
public:
    bool static cmp(vector<int>& a, vector<int>& b){
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end(), cmp);
        int counter = -1;
        vector<int> prev = intervals[0];
        for(int i=0; i<n; i++){
            if(prev[1]>intervals[i][0]) counter++;
            else prev = intervals[i];
        }
        return counter;
    }
};
// @lc code=end


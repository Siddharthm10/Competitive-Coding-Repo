class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()==1) return intervals;
        sort(intervals.begin(), intervals.end());

        int minCurrRange = intervals[0][0];
        int maxCurrRange = intervals[0][1];
        vector<vector<int>> ansIntervals;
        for(int i=1; i<intervals.size(); i++)
        {  
            if(maxCurrRange<intervals[i][0]){
                ansIntervals.push_back({minCurrRange, maxCurrRange});
                minCurrRange = intervals[i][0];
                maxCurrRange = intervals[i][1];
            }
            else{
                if(maxCurrRange<intervals[i][1])
                    maxCurrRange = intervals[i][1];
            }
        }
        ansIntervals.push_back({minCurrRange, maxCurrRange});
        return ansIntervals;

    }
};
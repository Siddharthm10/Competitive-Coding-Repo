class Solution {
public:
    
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int timeInSec =0;
        int x=points[0][0], y=points[0][1];
        for(int i=0; i<points.size(); i++){
            int minimum,maximum;
            // minimum = min(abs(points[i][0] - x), abs(points[i][1] - y));
            maximum = max(abs(points[i][0]-x),abs(points[i][1]-y));
            timeInSec +=  maximum;

            x = points[i][0];
            y = points[i][1];

        }
        return timeInSec;
    }
};
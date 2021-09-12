/*
 * @lc app=leetcode id=1014 lang=cpp
 *
 * [1014] Best Sightseeing Pair
 */

// @lc code=start
class Solution {
public:

    int maxScoreSightseeingPair(vector<int>& val) {
        int n=val.size();
        int max_so_far = val[0];
        int score = 0;
        for(int i=1; i<n; i++){
            score = max(score, max_so_far+val[i]-i);
            max_so_far = max(max_so_far, val[i]+i);
        }
        return score;
    }
};
// @lc code=end

/*
35/53 cases
Failed at - [3,7,2,3]
output - 8
answer - 9
    int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size();
        int i=0;
        int j=n-1;
        int maxValue = 0;
        int curValue = 0;
        while(i<j){
            curValue = values[i]+values[j]-j+i;
            maxValue = max(maxValue,curValue);
            if(values[i]>values[j]) j--;
            else if(values[i]==values[j]) {i++;j--;}
            else i++;
        }
        return maxValue;
    }
36/53
Failed at - [30,13,28,32,16,8,11,78,83,5,22,93,61,60,100,8,6,48,87,43,41,86,93,5,19,29,59,31,7,51,99,47,40,24,20,98,41,42,81,92,55,85,51,92,84,21,84,92,1,73,93,51,44,27,23,54,32,57,60,9,69,14,28,86,15,92,47,63,12,99,54,6,16,52,28,86,38,73,16,52,37,30,84,81,46,97,84,17,21,14,52,19,74,20,20,56,89,7,34,21]
output 185
answer 192
    int helper(vector<int> val, int i, int j, int& maxScore){
        if(i>=j) return maxScore;
        int curScore = val[i]+val[j]+i-j;
        maxScore = max(curScore, maxScore);
        if(val[i]>val[j]) return helper(val, i, j-1, maxScore);
        else if(val[i]<val[j]) return helper(val, i+1, j, maxScore);
        else return max(helper(val, i+1, j, maxScore), helper(val, i, j-1, maxScore));
    }

    int maxScoreSightseeingPair(vector<int>& val) {
        int n=val.size();
        int i=0;
        int j=n-1; 
        int maxScore = 0;
        return helper(val, i, j, maxScore);
    }

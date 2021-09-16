/*
 * @lc app=leetcode id=997 lang=cpp
 *
 * [997] Find the Town Judge
 */

// @lc code=start
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,int> m;
        if(n==1) return 1;
        for(int i=0; i<trust.size(); i++){
            m[trust[i][1]]++;
            m[trust[i][0]]--;
        }
        for(auto x:m){
            if(x.second==n-1) return x.first;
        }
        return -1;
    }
};
// @lc code=end


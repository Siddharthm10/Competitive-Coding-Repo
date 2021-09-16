/*
 * @lc app=leetcode id=1791 lang=cpp
 *
 * [1791] Find Center of Star Graph
 */

// @lc code=start
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        int maxLength = 0;
        int maxi = 0;
        vector<vector<int>> adjMatrix(n+2);
        for(int i=0; i<n; i++){
            int numA = edges[i][0];
            int numB = edges[i][1];
            adjMatrix[numA].push_back(numB);
            adjMatrix[numB].push_back(numA);
        }

        for(int i=1; i<=n+1; i++){
            if(maxLength<adjMatrix[i].size()){
                maxLength = adjMatrix[i].size();
                maxi = i;
            }
        }
        return maxi;
    }
};
// @lc code=end


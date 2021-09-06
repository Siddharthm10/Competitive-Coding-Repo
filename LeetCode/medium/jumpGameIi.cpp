/*
 * @lc app=leetcode id=45 lang=cpp
 *
 * [45] Jump Game II
 */

// @lc code=start
class Solution {
public:
    int jump(vector<int>& a) {
        vector<int> v(a.size(),INT_MAX);
        v[0]=0;
        int n = a.size();
        
        for(int i=0;i<n;i++)
            for(int j = std::min(a[i]+i,n-1);j!=i;j--) 
               if(v[i]+i<v[j]) v[j] = v[i]+1;
            
        return v[n-1];
    }
};
// @lc code=end


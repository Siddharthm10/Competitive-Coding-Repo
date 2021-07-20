/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution {
public:
    void helper(vector<int>& candidates, vector<vector<int>> &v, 
                vector<int>& comb, int target, int i){
        
        if(i==candidates.size()){
            if(target==0) 
                v.push_back(comb);
            return;
        }

        if(candidates[i]<=target){
            comb.push_back(candidates[i]);
            helper(candidates, v, comb, target-candidates[i], i);
            comb.pop_back();
        }

        helper(candidates, v, comb, target, i+1);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> v;
        vector<int> comb;
        v.reserve(150);
        int i = 0;
        helper(candidates, v, comb, target, i);
        return v;
    }
};
// @lc code=end


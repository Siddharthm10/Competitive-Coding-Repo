/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
 */

// @lc code=start
class Solution {
public: 
    void helper(vector<int>&nums, map<int,int> &m, 
                vector<vector<int>>&v, vector<int> &comb){
        
        if(nums.size() == comb.size()){
            v.push_back(comb);
            return;
        }
        for(int i=0; i<nums.size(); i++){
            if(m[nums[i]]==1){
                comb.push_back(nums[i]);
                m[nums[i]]=0;
                helper(nums, m, v, comb);
                m[nums[i]]=1;
                comb.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        map<int, int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        vector<int> comb;
        vector<vector<int>> v;
        
        helper(nums, m, v, comb);
        return v;
    }
};
// @lc code=end


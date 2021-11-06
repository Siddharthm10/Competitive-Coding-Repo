/*
 * @lc app=leetcode id=260 lang=cpp
 *
 * [260] Single Number III
 */

// @lc code=start
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        if(nums.size()==2) return {nums[0], nums[1]};
        int res = 0;
        for(int i=0; i<nums.size(); i++){
            res ^= nums[i];
        }

        int rsb = 0;
        int temp = res;
        int INT_SIZE = 8 * sizeof(unsigned int);
        for(int i=0; i<INT_SIZE; i++){
            if(temp & (1<<i)) {rsb = i; break;}
        }
        
        vector<int> rsb0, rsb1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]&(1<<rsb)){
                rsb1.push_back(nums[i]);
            } else{
                rsb0.push_back(nums[i]);
            }
        }

        int ans1 = res, ans2 = res;
        for(int i=0; i<rsb0.size(); i++){
            ans1 ^= rsb0[i];
        }
        for(int i=0; i<rsb1.size(); i++){
            ans2 ^=rsb1[i];
        }
        return {ans1, ans2};
    }
};
// @lc code=end


/*
 * @lc app=leetcode id=137 lang=cpp
 *
 * [137] Single Number II
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> bits(32,0);
        int INT_SIZE = 8 * sizeof(unsigned int);
        int n = nums.size();
        for(int i=0; i<INT_SIZE; i++){
            for(int j=0; j<n; j++){
                if ((nums[j] & (1 << i)) != 0)
                    bits[i] += 1;
            }
        }

        int res = 0;
        for (int i = 0; i < INT_SIZE; i++)
            res += (bits[i] % 3) * (1 << i);
        return res;
    }
};
// @lc code=end


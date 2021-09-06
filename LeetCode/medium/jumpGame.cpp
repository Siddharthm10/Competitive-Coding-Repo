/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) {
        // clean solution beats 80.23% on time and 95% on space.
        int n = nums.size();
        int reachable = 0;
        for(int i=0; i<n; i++){
            if(i>reachable) return false;
            reachable = max(reachable, i+nums[i]);
        }
        return true;
    }
};
// @lc code=end

/*
Solution 1 without dp:
    80.23% faster 

int n = nums.size();
if(n==1) return true;
int maxJumps=nums[0];
int i=1;
while(maxJumps>=0){
    if(i==n){
        return true;
    }
    if(maxJumps<nums[i-1]){
        maxJumps = nums[i-1];
    }
    if(maxJumps==0) return false;
    
    maxJumps--;
    i++;
}
return false;
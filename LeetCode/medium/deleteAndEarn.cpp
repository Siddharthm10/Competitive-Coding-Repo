/*
 * @lc app=leetcode id=740 lang=cpp
 *
 * [740] Delete and Earn
 */

// @lc code=start
class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int maxim = nums[0];
        int points=0;
        for(int i=1; i<nums.size(); i++)
        {
            maxim = max(maxim,nums[i]);
        }

        int arr[maxim+1], dp[maxim+1];
        memset(arr, 0, sizeof(arr));
        for(int i=0; i<nums.size(); i++){
            arr[nums[i]]+=nums[i];
        }
        dp[0] = 0;
        dp[1] = arr[1];
        for(int i=2; i<=maxim; i++){
            dp[i] = max(dp[i-1], dp[i-2]+arr[i]);
        }
        return dp[maxim];
    }
};
// @lc code=end

/* Greedy Solution :/ 
21/47 cases
failed at [1,1,2,2,3]
        unordered_map<int, int> valCounts;
        for(int i=0; i<nums.size(); i++)
        {
            valCounts[nums[i]]++;
        }

        int points = 0;
        while(!valCounts.empty())
        {
            int numberToBeDeleted = -1;
            int maxSum = INT_MIN;
            for(auto x:valCounts)
            {  
                if(x.second<=0) continue;
                int curSum = x.first*x.second;
                if(curSum>maxSum){
                    maxSum = curSum;
                    numberToBeDeleted = x.first;
                }
            }
            points+=numberToBeDeleted;
            valCounts[numberToBeDeleted]--;
            if(valCounts[numberToBeDeleted]==0) 
                valCounts.erase(numberToBeDeleted);
            valCounts.erase(numberToBeDeleted-1);
            valCounts.erase(numberToBeDeleted+1);
        }
        return points;
*/
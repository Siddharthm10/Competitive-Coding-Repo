/*
 * @lc app=leetcode id=18 lang=cpp
 *
 * [18] 4Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> quad;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-3; i++){
            for(int j=i+1; j<n-2; j++){
                int start = j+1, end = n-1, sum=target-nums[i]-nums[j];
                while(start<end){
                    if(nums[start]+nums[end]==sum){
                        quad.push_back({nums[i], nums[j], nums[start], nums[end]});
                        while(start<end && nums[start]==nums[start+1]) start++;
                        while(start<end && nums[end]==nums[end-1]) end--;
                        start++;end--;
                    }
                    else if(nums[start]+nums[end]<sum){
                        start++;
                    }else{
                        end--;
                    }
                }
                while(j+1 < n-2 && nums[j] == nums[j+1]) j++;            
            }
            while(i+1 < n-3 && nums[i]==nums[i+1]) i++;
        }
        return quad;
    }
};
// @lc code=end

/*
210/286
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> quad;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for(int i=0; i<n-3; i++){
        if(i==0||nums[i]!=nums[n-i]){
            for(int j=i+1; j<n-2; j++){
                if(j==1||nums[j]!=nums[j-1]){
                    int start = j+1, end = n-1, sum=target-nums[i]-nums[j];
                    while(start<end){
                        if(nums[start]+nums[end]==sum){
                            quad.push_back({nums[i], nums[j], nums[start], nums[end]});
                            while(start<end && nums[start]==nums[start+1]) start++;
                            while(start<end && nums[end]==nums[end-1]) end--;
                            start++;end--;
                        }
                        else if(nums[start]+nums[end]<sum){
                            start++;
                        }else{
                            end--;
                        }
                    }
                }
            }
        }
    }
    return quad;
}
*/
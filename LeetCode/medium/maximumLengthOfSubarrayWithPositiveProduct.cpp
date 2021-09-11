/*
 * @lc app=leetcode id=1567 lang=cpp
 *
 * [1567] Maximum Length of Subarray With Positive Product
 */

// @lc code=start
class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int n = nums.size();
        int maxCount = 0;
        int posCount = 0;
        int negCount = 0;
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                negCount=posCount=0;
            } else if(nums[i]>0){
                posCount++;
                if(negCount!=0){
                    negCount++;
                }
                maxCount = max(maxCount, posCount);
            } else{
                swap(posCount, negCount);
                negCount++;
                if(posCount!=0){
                    posCount++;
                }
                maxCount = max(maxCount, posCount);
            }
        }
        return  maxCount;        
    }
};
// @lc code=end

/*
97/112 cases -> Failed at [1,2,3,5,-6,4,0,10]
output -> 5
correct -> 4
        int n = nums.size();
        int maxCount = 0;
        int curCount = 0;
        int negCount = 0;
        for(int i=0; i<n; i++){
            if(nums[i]>0) curCount++;
            if(nums[i]<0) negCount++;
            if(negCount!=0 && negCount%2==0) {curCount+=2;negCount=0;}
            maxCount = max(maxCount, curCount);
            if(nums[i]==0) {curCount=0; negCount=0;}
        }
        return  maxCount;   
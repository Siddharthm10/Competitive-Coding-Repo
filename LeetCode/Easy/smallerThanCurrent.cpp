class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> counter(102);
        vector<int> answer(nums.size());
        for(int i=0; i<nums.size(); i++){
            counter[nums[i]+1]++;
        }
        
        int sum=0;
        for(int i=0; i<counter.size(); i++){
            sum+=counter[i];
            counter[i]=sum;
        }
        
        for(int i=0; i<nums.size(); i++){
            answer[i] = counter[nums[i]];
        }
        
        return answer;
    }   
};

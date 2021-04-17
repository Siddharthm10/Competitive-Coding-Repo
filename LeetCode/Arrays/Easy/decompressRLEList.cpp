class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        
        vector<int> answer;
        for(int i=0; i+1<nums.size(); i+=2){
            while(nums[i]--){
                answer.push_back(nums[i+1]);
            }
        }
        return answer;
    }
};

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> answer(nums.size(), -1);
        for(int i=0; i<nums.size(); i++){
            if(answer[index[i]]==-1){
                answer[index[i]] = nums[i];
            }
            else{
                answer.insert(answer.begin()+index[i], nums[i]);
            }
        }
        
        while(answer.size()!=nums.size()){
            answer.pop_back();
        }
        return answer;
    }
};

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        else{
            for(int i=1; i<nums.size();){
                if(nums[i]==nums[i-1]){
                    //delete nums[i]
                    nums.erase(nums.begin()+i);
                }else {
                    i++;
                }
            }
            return nums.size();
        }
    }
};

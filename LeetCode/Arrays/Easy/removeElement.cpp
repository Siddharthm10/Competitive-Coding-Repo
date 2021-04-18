class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int counter=0;
        if(nums.size()==1&&nums[0]==val) return 0;
        else if(nums.size()==1) return 1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==val){
                nums[i] = 51;
                counter++;
            }
        }
        sort(nums.begin(), nums.end());
        return nums.size() - counter;
    }
};

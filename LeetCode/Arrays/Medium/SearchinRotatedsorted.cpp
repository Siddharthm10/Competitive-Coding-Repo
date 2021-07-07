class Solution {
public:
    int bs(vector<int> nums, int target, int start, int end){
        if(start<=end){
            int middle = start + (end-start)/2;
            if(nums[middle] == target) return middle;
            if(nums[middle]>=nums[start]){
                if(target>nums[middle] || target<nums[start])
                    return bs(nums, target, middle+1, end);
                else
                    return bs(nums, target, start, middle-1);
            }
            else{
                
                if(target<nums[middle] || target>nums[end]){
                    return bs(nums, target, start, middle-1);
                }
                else
                    return bs(nums, target, middle+1, end);
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        if(nums.size()==1) return (nums[0]==target)?0:-1;
        return bs(nums, target, 0, nums.size()-1);
    }
};

class Solution {
public:
    //O(logN)
    int searchInsert(vector<int>& nums, int target) {
        //binary search is a better approach!!
        int start = 0;
        int end = nums.size();
        while(start<end){
            auto mid = (start+end)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                end = mid;
            }else{
                start=mid+1;
            }
        }
        return end;
    }
    
    //O(N)
//     int searchInsert(vector<int>& nums, int target) {
        
//         for(int i=0; i<nums.size(); i++){
//             if(nums[i]==target) return i;
//             if(nums[i]>target) return i;
//         }
//         return nums.size();
//     }
};

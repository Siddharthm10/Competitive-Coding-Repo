class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int x=0;
        std::unordered_map<int,int> a;
        for(int i=0;i<nums.size();i++){
            x=target-nums[i];
            if(a.find(x)!=a.end()){
                return {a.find(x)->second,i};
            }else{
                a[nums[i]]=i;
            }
        }
    return{};
    }
};
// It was hard as I was thinking of using two for loops but later on I found this solution with O(n) time complexity.

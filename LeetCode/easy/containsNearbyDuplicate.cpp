class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        //THIS IS WHAT IT MEANT
        // for(int i=0; i<nums.size(); i++){
        //     for(int j=i+1; j<nums.size()&&j<=k+i; j++){
        //         if(nums[i]==nums[j]) return true;
        //     }
        // }
        // return false;
        
        
        // & THIS IS A BETTER SOLUTION
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i])!=m.end())
            {
                if(abs(m[nums[i]]-i)<=k) 
                    return true;
            }
            m[nums[i]]=i;
        }
        return false;
    }
};

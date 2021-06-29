class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int a = 0;
        // find the xor of all elements
        for(auto x: nums){
            a ^= x;
        }
        
        // find rightmost set bit
        int rightMostSetBit = a & ~(a-1);
        int p=0,q=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] & rightMostSetBit){
                p = p ^ nums[i];
            }else{
                q = q ^ nums[i];
            }
        }
        if(p<q){
            return {p,q};
        }
        else{
            return {q,p};
        }
    }
};

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i=0;
        int j=1;

        while(1){
        	//odd
        	while(j<nums.size()){
        		if(nums[j]%2==1)
        			j+=2;
        		else break;
        	}
        	//even
        	while(i<nums.size()){
        		if(nums[i]%2==0)
        			i+=2;
        		else break;
        	}
        	if(i<nums.size()&&j<nums.size())
        		swap(nums[i],nums[j]);
        	else
        		break;
        }
        return nums;
    }
};
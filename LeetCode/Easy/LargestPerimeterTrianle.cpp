class Solution {
public:
	bool ConditionCheck(int a, int b, int c){
		return (a+b>c && b+c>a && c+a>b);
	}
    int largestPerimeter(vector<int>& nums) {
        if(nums.size()<3)
        	return 0;
        sort(nums.begin(), nums.end(), greater<>());
        for(int i=2; i<nums.size(); i++){
        	if(ConditionCheck(nums[i-2],nums[i-1],nums[i]))
        		return nums[i-2]+nums[i-1]+nums[i];
        }
        return 0;
    }
};
//93% on time :)
class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums(n);
        if(n==1) return start;
        for(int i=0; i<n; i++){
            nums[i] = start + 2*i;
        }
        
        int temp = nums[0]^nums[1];
        for(int i=2; i<n; i++){
            temp= temp^nums[i];
        }
        return temp;
    }
};

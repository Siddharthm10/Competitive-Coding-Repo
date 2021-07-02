class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int a=0;
        for(int i=1; i<=n; i++){
            a ^= i;
        }
        for(int i=0; i<n-1; i++){
            a ^= array[i];
        }
        return a;
    }
};


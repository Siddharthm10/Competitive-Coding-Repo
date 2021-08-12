class Solution
{
    public:

    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        vector<int> dp(n+1,-1);
        dp[0]=0;
        for(int i=0; i<=n; i++){
            if(dp[i]==-1) continue;
            if(i+x<=n){
                dp[i+x] = max(dp[i+x], dp[i]+1);
            }
            if(i+y<=n){
                dp[i+y] = max(dp[i+y], dp[i]+1);
            }
            if(i+z<=n){
                dp[i+z] = max(dp[i+z], dp[i]+1);
            }
        }
        if(dp[n]==-1)
            return 0;
        else return dp[n];
    }
};

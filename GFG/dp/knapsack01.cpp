class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        
       // Your code here
       if(n==0 || W==0){
         return 0;
       }

       if(wt[n-1]>W){
         // I didnt include W
         return knapSack(W, wt, val, n-1);
       }
       else{
         // Pick wt[n-1]
         return max(val[n-1] + knapSack(W-wt[n-1], wt, val, n-1), knapSack(W, wt, val, n-1));
       }
    }
};


//approach 2
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
      int table[n+1][W+1];
      for(int i=0; i<=n; i++)
      {
         for(int j=0; j<=W; j++)
         {
            if(i==0 || j==0){
               table[i][j] = 0;
            }
            else if(wt[i-1]<=j)
            {
               table[i][j] = max(val[i-1]+table[i-1][j-wt[i-1]], table[i-1][j]);
            }
            else
            {
               table[i][j] = table[i-1][j];
            }
         }
      }
      return table[n][W];
    }
};

// memoization 
class Solution
{
    
    public:
    int helper(int target, int wt[], int val[], int n, vector<vector<int>>& dp){
        // Your code here
       if(target==0||n==0) return 0;
       if(dp[n][target]==-1){
           if(wt[n-1]>target){
               dp[n][target] = helper(target, wt, val, n-1, dp);
           }
           else{
               dp[n][target] = max(helper(target, wt, val, n-1,dp), 
                                   val[n-1] + helper(target-wt[n-1], wt, val, n-1,dp));
           }
       }
       return dp[n][target];
    }
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    {
        vector<vector<int>> dp(n+1, vector<int>(W+1,-1));
        return helper(W, wt, val, n, dp);
    }
};

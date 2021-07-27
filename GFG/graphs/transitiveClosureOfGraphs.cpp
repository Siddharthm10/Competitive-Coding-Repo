// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// Back-end complete function Template for C++

class Solution{
public:
    void dfs(int node, vector<int> &vis, vector<vector<int>>& adjList){
        for(auto it: adjList[node]){
            if(vis[it]==0){
                vis[it]=1;
                dfs(it, vis, adjList);
            }
        }
    }
    vector<vector<int>> transitiveClosure(int n, vector<vector<int>> graph)
    {
        // code here
        vector<vector<int>> adjList(n);
        vector<vector<int>> ans(n,vector<int>(n,0));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(graph[i][j]==1)
                    adjList[i].push_back(j);
            }
        }
        
        for(int k=0; k<n; k++){
            vector<int> vis(n,0);
            vis[k]=1;
            dfs(k, vis, adjList);
            for(int i=0; i<n; i++){
                ans[k][i] = vis[i];
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> graph(N, vector<int>(N, -1));
        for(int i = 0;i < N;i++)
            for(int j=0;j<N;j++)
            cin>>graph[i][j];
        
        Solution ob;
        vector<vector<int>> ans = ob.transitiveClosure(N, graph);
        for(int i = 0;i < N;i++)
            {for(int j = 0;j < N;j++)
                cout<<ans[i][j]<<" ";
        cout<<"\n";}
    }
    return 0;
}  // } Driver Code Ends

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    //Function to find the number of islands.
    bool check(int x, int y, int n, int m){
        return (x>=0&&x<n&&y>=0&&y<m);
    }
    void dfs(int i, int j, vector<vector<char>>&grid, vector<vector<char>>&vis){
        if(check(i, j, grid.size(), grid[0].size())&&vis[i][j]=='0'&&grid[i][j]=='1') {
            vis[i][j]='1';
            dfs(i+1, j, grid, vis);
            dfs(i-1, j, grid, vis);
            dfs(i, j+1, grid, vis);
            dfs(i, j-1, grid, vis);
            dfs(i+1, j+1, grid, vis);
            dfs(i+1, j-1, grid, vis);
            dfs(i-1, j+1, grid, vis);
            dfs(i-1, j-1, grid, vis);
        }
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        // Code here
        int counter = 0;
        vector<vector<char>> vis(grid.size(),vector<char>(grid[0].size(),'0'));

        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                if(vis[i][j]=='0'&&grid[i][j]=='1'){
                    counter++;
                    dfs(i,j,grid,vis);
                }
            }
        }
        return counter;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m, '#'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.numIslands(grid);
		cout << ans <<'\n';
	}
	return 0;
}  // } Driver Code Ends

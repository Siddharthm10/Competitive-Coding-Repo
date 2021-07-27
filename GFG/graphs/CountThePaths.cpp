class Solution {
public:
    void dfs(int node, vector<vector<int>> &adj, int d, int &counter){
        if(node==d){counter++; return;}
        for(auto it:adj[node]){
            dfs(it, adj, d, counter);
        }
    }
	int possible_paths(vector<vector<int>>edges, int n, int s, int d){
	    int counter = 0;
	    vector<vector<int>> adj(n);
	    for(int i=0; i<edges.size(); i++){
	        int par = edges[i][0];
	        int node = edges[i][1];
	        adj[par].push_back(node);
	    }
	    dfs(s, adj, d, counter);
	    return counter;
	}
};

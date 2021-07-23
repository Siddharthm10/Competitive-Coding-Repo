class Solution 
{
    public:
    void helper(int i, int V, vector<int> adj[], vector<int>& ans, vector<int>& vis){
        if(vis[i]!=0) return;
        vis[i] = 1;
        ans.push_back(i);
        for(auto it:adj[i]){
            helper(it, V, adj, ans, vis);
        }
    }
	//Function to return a list containing the DFS traversal of the graph.
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    vector<int> ans;
	    vector<int> vis(V,0);
	    helper(0, V, adj, ans, vis);
	    return ans;
	}
};


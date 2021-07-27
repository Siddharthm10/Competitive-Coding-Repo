//O(N^2)

class Solution
{
    public:
    bool checkIfAllVisited(vector<int> &vis){
        for(int i=0; i<vis.size(); i++){
            if(vis[i]==0) return false;
        }
        return true;
    }
    void dfs(int node, vector<int>& vis, vector<int> adj[]){
        vis[node]=1;
        for(auto it:adj[node]){
            if(vis[it]==0){
                dfs(it, vis, adj);
            }
        }
    }
    //Function to find a Mother Vertex in the Graph.
	int findMotherVertex(int V, vector<int>adj[])
	{
	    // Code here
	    for(int i=0; i<V; i++){
	        vector<int> vis(V, 0);
	        dfs(i, vis, adj);
	        if(checkIfAllVisited(vis)) return i;
	    }
	    return -1;
	}

};


//O(V+E)

class Solution 
{
    public:
    bool checkIfAllVisited(vector<int> &vis){
        for(int i=0; i<vis.size(); i++){
            if(vis[i]==0) return false;
        }
        return true;
    }
    void dfs(int node, vector<int>& vis, vector<int> adj[]){
        vis[node]=1;
        for(auto it:adj[node]){
            if(vis[it]==0){
                dfs(it, vis, adj);
            }
        }
    }
    //Function to find a Mother Vertex in the Graph.
	int findMotherVertex(int V, vector<int>adj[])
	{
	    // Code here
        vector<int> vis(V, 0);
        int lastVis = 0;
	    for(int i=0; i<V; i++){
	        if(vis[i]==0){
	            dfs(i, vis, adj);
	            lastVis = i;
	        }
	    }
	    //if lastVis node can reach all the nodes in the next traversal that is the ans else we can do it 
	    fill(vis.begin(), vis.end(), 0);
	    dfs(lastVis,vis,adj);
	    if(checkIfAllVisited(vis)) return lastVis;
	    return -1;
	}

};

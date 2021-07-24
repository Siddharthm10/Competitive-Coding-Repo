
class Solution 
{
    public:
    //Function to detect cycle in an undirected graph.
	bool isCycle(int V, vector<int>adj[])
	{
	    // Code here
	    vector<int> vis(V);
	    for(int i=0; i<V; i++){
	        if(vis[i]==0){
	            queue<pair<int,int>> q;
	            q.push({i,-1});
	            vis[i] = 1;
	            while(!q.empty()){
	                int node = q.front().first;
	                int pre = q.front().second;
	                q.pop();
	                for(auto it:adj[node]){
	                    if(pre!=it){
	                        if(vis[it]==1) return true;
	                        else{
	                            q.push({it,node});
	                            vis[it]=true;
	                        }
	                    }
	                }
	            }
	        }
	    }
	    return false;
	}
};



// DFS

class Solution 
{
    public:
    bool dfs(int node, int pre, int V, vector<int> adj[], vector<bool> vis){
        vis[node] = true;
        for(auto it:adj[node]){
            if(!vis[it]) {
                if(dfs(it, node, V, adj, vis)) return true;
            }
            else if(it!=pre) return true;
        }
        return false;
    }
    //Function to detect cycle in an undirected graph.
	bool isCycle(int V, vector<int>adj[])
	{
	    // Code here
	    vector<bool> vis(V, false);
	    bool ans = false;
	    for(int i=0; i<V; i++){
	        if(!vis[i]){
	            if(dfs(i,-1, V, adj, vis)) return true;
	        }
	    }
	    return false;
	}
};


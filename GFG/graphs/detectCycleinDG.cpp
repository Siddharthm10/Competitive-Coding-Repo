//dfs
class Solution
{
    public:
    bool checkCycle(int node, vector<int>& vis, vector<int> &dfsVis, vector<int> adj[]){
        vis[node]=1;
        dfsVis[node]=1;
        for(auto it:adj[node]){
            if(vis[it]==0){
                if(checkCycle(it, vis, dfsVis, adj)) return true;
            }else if(dfsVis[it]==1) return true;
        }
        dfsVis[node]=0;
        return false;
    }
	//Function to detect cycle in a directed graph.
	bool isCyclic(int V, vector<int> adj[]) 
	{
	   	// code here
	   	vector<int> vis(V,0);
	   	vector<int> dfsVis(V,0);
	   	for(int i=0; i<V; i++){
	   	    if(vis[i]==0){
	   	        if(checkCycle(i,vis, dfsVis, adj)) return true;
	   	    }
	   	}
	   	return false;
	}
};


//dfs

class Solution
{
	public:
	//dfs
	void helper(int node, vector<int> &vis, vector<int> adj[], stack<int>& st){
	    vis[node] = 1;
	    for(auto it:adj[node]){
	        if(vis[it]==0){
	            helper(it, vis, adj, st);
	        }
	    }
        st.push(node);
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> ans;
	    stack<int> st;
	    vector<int> vis(V,0);
	    for(int i=0; i<V; i++){
	        if(vis[i]==0){
	            helper(i, vis, adj, st);
	        }
	    }
	    while(!st.empty()){
	        ans.push_back(st.top());
	        st.pop();
	    }
	    return ans;
	}
};

//bfs
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> indegree(V,0);
	    for(int i=0; i<V; i++){
	        for(int j=0; j<adj[i].size(); j++){
	            indegree[adj[i][j]]++;
	        }
	    }
	    queue<int> q;
	    vector<int> topo;
	    for(int i=0; i<V; i++){
	        if(indegree[i]==0)
	        {
	            q.push(i);
	        }
	    }
	    while(!q.empty()){
	        int node = q.front();
	        q.pop();
            topo.push_back(node);
	        for(auto it:adj[node]){
	            indegree[it]--;
	            if(indegree[it]==0){
	                q.push(it);
	            }
	        }
	    }
	    return topo;
	}
};

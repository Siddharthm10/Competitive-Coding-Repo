class Solution 
{
    public:
    void print(vector<int> v){
        for(auto it:v){
            cout<<it<<" ";
        }
        cout<<endl;
    }
	//Function to return the adjacency list for each vertex.
	vector<vector<int>>printGraph(int V, vector<int> adj[])
	{
	    // Code here
	    vector<vector<int>> ans(V);
	    for(int i=0; i<V; i++){
	        ans[i].push_back(i);
	        for(int j=0; j<adj[i].size(); j++){
	            ans[i].push_back(adj[i][j]);
	        }
	    }
	    
	    return ans;
	}
};

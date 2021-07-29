class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        vector<int> key(V,INT_MAX);
        key[0]=0;
        vector<bool> mst(V, false);
        vector<int> parent(V, -1);
        for(int i=0; i<V-1; i++){
            int mini = INT_MAX, minIndex;
            for(int j=0; j<key.size(); j++){
                if(key[j]<mini && !mst[j]){
                    minIndex = j;
                    mini = key[j];
                }
            }
            
            mst[minIndex] = true;
            for(auto it:adj[minIndex]){
                if(mst[it[0]]==false && it[1]<key[it[0]]){
                    key[it[0]] = it[1];
                    parent[it[0]] = minIndex;
                }
            }
        }
        
        int ans = 0;
        for(int i=1; i<V; i++){
            ans+=key[i];
        }
        return ans;
    }
};

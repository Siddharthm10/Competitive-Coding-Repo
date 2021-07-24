class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int> dist(V, INT_MAX);
        priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;//dist, node
        dist[S]=0;
        pq.push({0,S});
        
        while(!pq.empty()){
            int pre = pq.top().second;
            pq.pop();
            
            for(auto it:adj[pre]){
                int next = it[0];
                int wt = it[1];
                if(dist[next]>dist[pre]+wt){
                    dist[next] = dist[pre]+wt;
                    pq.push({dist[next], next});
                }
            }
        }
        return dist;
    }
};


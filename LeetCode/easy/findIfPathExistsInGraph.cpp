class Solution {
public:
    
    bool checkIfExists(vector<vector<int>>& graph, vector<bool>& visited,int target,int current) {
        
        if(visited[current] == true) return false;
        
        if(current == target) return true;
        
        visited[current] = true;
        
        for(int ctr = 0 ; ctr < graph[current].size(); ctr++) {
            if(checkIfExists(graph,visited,target,graph[current][ctr])) return true;
        }
        
        return false;
        
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int &start, int &end) {
        
        vector<vector<int>> graph(n);
        
        for(int ctr = 0 ; ctr < edges.size() ; ctr ++) {
            
            int first = edges[ctr][0], second = edges[ctr][1];
            
            graph[first].push_back(second);
            graph[second].push_back(first);
            
        }
        
        vector<bool> visited(n,false);
        
        for(int ctr = 0 ; ctr < graph.size() ; ctr++) {
            if(start == ctr && checkIfExists(graph,visited,end,ctr)) return true;
        }
        
        return false;
        
    }
};
// class Solution {
// public:
//     bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
//         vector<vector<int>> adjMat(n);
//         if(start==end) return true;
//         for(int i=0; i<edges.size(); i++){
//             adjMat[edges[i][0]].push_back(edges[i][1]);
//             adjMat[edges[i][1]].push_back(edges[i][0]);
//         }
//         vector<int> vis(n+1,0);
        
//         queue<int> q;
//         q.push(start);
//         vis[start] = 1;
//         while(!q.empty()){
//             int node = q.front();
//             q.pop();
//             for(auto x:adjMat[node]){
//                 if(x==end) return true;
//                 if(vis[x]==1) continue;
//                 vis[x] = 1;
//                 q.push(x);
//             }
//         }
//         return false;
//     }
// };
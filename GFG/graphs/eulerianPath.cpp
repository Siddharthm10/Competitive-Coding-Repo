class Solution{
public:
    bool checkVis(vector<int> vis){
        for(int i=0; i<vis.size(); i++){
            if(vis[i]==0) return false;
        }
        return true;
    }
    int eulerPath(int N, vector<vector<int>> graph){
        // code here
        int totalOdd = 0;
        for(int i=0; i<N; i++){
            int adjNodes = 0;
            for(int j=0; j<N; j++){
                if(graph[i][j]==1){
                    adjNodes++;
                }
            }
            if(adjNodes%2==1){
                totalOdd++;
            }
        }
        if(totalOdd>2) return 0;
        return 1;
    }
};

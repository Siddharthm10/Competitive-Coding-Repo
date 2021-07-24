class Solution {
public:
    void switchColor(int &nextColor){
        nextColor = 1 - nextColor;
    }
    
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int> color(V,-1);
	    for(int i=0; i<V;i++){
	        if(color[i]==-1){
    	        queue<int> q;
    	        q.push(i);
    	        color[i] = 1;
    	        while(!q.empty()){
    	            int node = q.front();
    	            q.pop();
    	            for(auto it:adj[node]){
    	                if(color[it]==-1){
    	                    color[it]=1-color[node];
    	                    q.push(it);
    	                }
    	                else if(color[it]==color[node]) return false;
    	            }
    	        }
	        }
	    }
	    return true;
	}
};


//dfs
class Solution {
public:
    bool checkDFS(int node, int par, vector<int>& color, vector<int> adj[]){
        // if(color[node]==color[par]) return false;
        for(auto it:adj[node]){
            if(color[it]==-1){
                color[it]= 1-color[node];
                if(!checkDFS(it, node, color, adj)) return false;
            }else if(color[it]==color[node]) return false;
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int> color(V,-1);
	    for(int i=0; i<V; i++){
	        if(color[i]==-1){
	            color[i]=0;
	            if(!checkDFS(i, -1, color, adj)) return false;
	        }
	    }
	    return true;
	}
};

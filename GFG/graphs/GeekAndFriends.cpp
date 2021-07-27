// #include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool check(int node, vector<vector<int>> &adj, vector<int>& team){
    for(auto it:adj[node]){
        if(team[it]==-1){
            team[it]=1-team[node];
            if(!check(it, adj, team)) return false;
        }
        else if(team[it]==team[node]) return false;
    }
    return true;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int N, M;
	    cin>>N>>M;
	    vector<vector<int>> adj(N);
	    for(int i=0; i<M; i++){
	        int par, node;
	        cin>>par>>node;
	        adj[par-1].push_back(node-1);
	        adj[node-1].push_back(par-1);
	    }

	    vector<int> team(N,-1);
	    bool ans = true;
	    for(int i=0; i<N; i++){
	        if(team[i]==-1){
	            team[i]=0;
	            if(!check(i,adj,team)){
	                ans = false;
	                break;
	            }
	        }
	    }
	    if(ans) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}
	return 0;
}

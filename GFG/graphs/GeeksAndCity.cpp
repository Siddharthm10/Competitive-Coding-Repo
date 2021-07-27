#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--){
    	int N, M;
    	cin>>N>>M;
    	vector<vector<int>> adj(N);
    	for(int i=0; i<M; i++){
    	    int par, node;
    	    cin>>par>>node;
    	    adj[par-1].push_back(node-1);
    	    adj[node-1].push_back(par-1);
    	}
    	vector<int> visited(N,0);
    	int counter = -1;
    	for(int i=0; i<N; i++){
    	    if(visited[i]==0){
    	        queue<int> q;
    	        q.push(i);
    	        visited[i]=1;
    	        while(!q.empty()){
    	            int node = q.front();
    	            q.pop();
    	            for(auto it:adj[node]){
    	                if(visited[it]==0){
    	                    visited[it]=1;
    	                    q.push(it);
    	                }
    	            }
    	        }
    	        counter++;
    	    }
    	}
    	cout<<counter<<"\n";
	}
	return 0;
}

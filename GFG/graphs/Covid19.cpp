#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool check(int n, int m, int i, int j){
    if(i<n && i>=0 && j<m && j>=0) return true;
    return false;
}

int solve(vector<vector<int>> matrix){
    int counter = 0;//time
    int n = matrix.size();
    int m = matrix[0].size();

    queue<pair<int,int>> infectedNodes;
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[0].size(); j++){
            if(matrix[i][j]==0){
                infectedNodes.push({i,j});
            }
        }
    }
    
    while(!infectedNodes.empty()){
        int size = infectedNodes.size();
        for(int i=0; i<size; i++){
            int x = infectedNodes.front().first;
            int y = infectedNodes.front().second;
            infectedNodes.pop();
            
            if(check(n,m,x+1,y)&&matrix[x+1][y]==1){
                matrix[x+1][y] = 0;
                infectedNodes.push({x+1, y});
            }
            if(check(n,m,x-1,y)&&matrix[x-1][y]==1){
                matrix[x-1][y] = 0;
                infectedNodes.push({x-1, y});
            }
            if(check(n,m,x,y+1)&&matrix[x][y+1]==1){
                matrix[x][y+1] = 0;
                infectedNodes.push({x,y+1});
            }
            if(check(n,m,x,y-1)&&matrix[x][y-1]==1){
                matrix[x][y-1] = 0;
                infectedNodes.push({x,y-1});
            }
        }
        counter++;
    }
    return counter-1;
}

int main() {
	//code
	int T;
	cin>>T;
	while(T--){
	    int N, M;
	    cin>>N>>M;
	    vector<vector<int>> matrix(N,vector<int>(M));
	    for(int i=0; i<N; i++){
	        for(int j=0; j<M; j++){
	            cin>>matrix[i][j];
	        }
	    }
	    cout<<solve(matrix)<<"\n";
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	int N,M;
	int q, r1, c1, r2, c2;
	while(T--){
    	cin>>N>>M;
    	int matrix[N][M];
    	for(int i=0; i<N; i++){
    	    for(int j=0; j<M; j++){
    	        cin>>matrix[i][j];
    	    }
    	}
    	cin>>q;
    	while(q--){
    	    int counter = 0;
    	    cin>>r1>>c1>>r2>>c2;
    	    for(int i=r1-1; i<r2; i++){
    	        for(int j=c1-1; j<c2; j++){
    	            if(matrix[i][j]) counter++;
    	        }
    	    }
    	    cout<<counter<<endl;
    	}
	}
	
	return 0;
}

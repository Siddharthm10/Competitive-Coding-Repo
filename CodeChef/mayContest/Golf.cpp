//"It's not a bug, It's a feature
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>

using namespace std;


// bool BallMeetsHole(int n, int x, int k){
// 	for(int i=0,j=n+1; i<=n+1&&j>=0; i+=k, j-=k){
// 		if(i==x||j==x) return true;
// 	}
// 	return false;
// }//gave TLE

bool BallMeetsHole(int n, int x, int k){
	if((x)%k==0||(n+1-x)%k==0) return true;
	return false;
}



int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	for(int i=0; i<t; i++){
		// Number of tiles, 
		// hole at tile number,
		// jumping lenght
		int n,x,k;
		cin>>n>>x>>k;
		if(BallMeetsHole(n,x,k))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	return 0;
}	
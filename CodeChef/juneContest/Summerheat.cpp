//"It's not a bug, It's a feature
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>
#define ll long long int
using namespace std;


int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll t;
	cin>>t;

	while(t--){
		//Content of one coconut
		ll xa,xb;
		cin>>xa>>xb;

		//Content required
		ll Xa,Xb;
		cin>>Xa>>Xb;

		float CoconutA = Xa/xa;
		float CoconutB = Xb/xb;

		cout<<ceil(CoconutA)+ceil(CoconutB)<<endl;
	}

	return 0;
}	
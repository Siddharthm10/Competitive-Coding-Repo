//"It's not a bug, It's a feature
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>
#define ll long long int

using namespace std;


//10^9 + 7 is appx 2^30
ll countXOREquality(ll N){
	ll mod = 1000000000+7;
	N-=1;
	ll iterations = N/30;
	ll answer = 1;
	ll remaining = N%30;
	while(iterations--){
		answer=(answer*(ll)pow(2,30))%mod;
	}
	return (answer*(ll)pow(2,remaining))%mod;
}

int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll t;
	cin>>t;
	for(ll i=0; i<t; i++){
		ll N;
		cin>>N;
		cout<<countXOREquality(N);
		if(i!=t-1) cout<<endl;
	}

	return 0;
}	
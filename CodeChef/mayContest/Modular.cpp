//"It's not a bug, It's a feature
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>
#define ll long long int 

using namespace std;
ll answer(ll m, ll n){
	ll counter=0;
	vector<ll> mod(n+1, 1);
	for(ll a=2; a<=n; a++){
		ll x=m%a;
		counter+=mod[x];
		for(ll b=x; b<=n; b+=a){
			mod[b]++;
		}
	}
	return counter;
}	

int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif


	ll t;
	cin>>t;
	for(ll i=0; i<t; i++){
		ll n, m;
		cin>>n>>m;
		ll ans = answer(m,n);
		// ll correctAns = slowAnswer(m,n);
		cout<<ans<<endl;
	}

	return 0;
}	
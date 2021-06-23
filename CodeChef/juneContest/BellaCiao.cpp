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
		ll D,d,P,Q;	
		cin>>D>>d>>P>>Q;

		ll extraDays = D%d;
		ll completeItr = D/d;
		ll answer = d*completeItr*(2*P + Q*(completeItr-1))/2;
		
		answer += extraDays * (P + Q*completeItr);
		cout<<answer;
		if(t>0){cout<<endl;}
	}

	return 0;
}	
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

	ll n, k;
	cin>>n>>k;
	string cardsPicked;
	cin>>cardsPicked;

	map<char, ll> mapping;
	for(ll i=0; i<cardsPicked.length(); i++){
		mapping[cardsPicked[i]]++;
	}

	vector<ll> frequencies;
	for(auto x:mapping){
		frequencies.push_back(x.second);
	}
	sort(frequencies.begin(), frequencies.end(), greater<int>());

	ll coins = 0;
	for(auto x:frequencies){
		if(k==0) break;
		else if(x>=k){
			coins += k*k;
			k = 0;
		}else{
			coins += x * x;
			k -= x;
		}
	}
	cout<<coins;

	return 0;
}	
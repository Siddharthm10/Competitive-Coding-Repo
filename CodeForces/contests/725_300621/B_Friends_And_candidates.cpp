//"It's not a bug, It's a feature
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>
#define ll long long int
using namespace std;

bool checkIfEqual(int n, vector<int>candies){
	for(int i=1; i<n; i++){
		if(candies[i]!=candies[i-1]){
			return false;
		}
	}
	return true;
}

int findK(int n, vector<int> candies){
	//base conditions
	if(n==1){
		return 0;
	}
	if(checkIfEqual(n, candies)) {
		return 0;
	}

	// map<int, int> candyFreq;
	int sum = 0;
	for(int i=0; i<n; i++){
		// candyFreq[candies[i]]++;
		sum += candies[i];	
	}
	if(sum%n!=0) return -1;

	int k=0;
	for(int i=0; i<n; i++){
		if(candies[i]>sum/n){
			k++;
		}
	}
	return k;
}

int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	int n;	
	for(int i=0; i<t; i++){
		cin>>n;
		vector<int> candies(n);
		for(int i=0; i<n; i++){
			cin>>candies[i];
		}
		cout<<findK(n, candies)<<endl;
	}

	return 0;
}	
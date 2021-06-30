//"It's not a bug, It's a feature
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>
#define ll long long int
using namespace std;

int findsteps(int n, vector<int> stones){

	int minimum = INT_MAX, maximum = INT_MIN;
	int min_index = -1, max_index = -1;
	for(int i=0; i<stones.size(); i++){
		if(maximum<stones[i]){
			max_index = i;
			maximum = stones[i];
		}
		if(minimum>stones[i]){
			min_index = i;
			minimum = stones[i];
		}
	}
	// cout<<"max& Min " << maximum<<" "<<minimum<<endl;
	// cout<<"Max & min index "<<max_index<<" "<<min_index<<endl;

	// cout<< min(min_index+1, n-min_index)<<" ";
	// cout<< min(max_index+1, n-max_index)<<endl;

	// return min(min_index+1, n-min_index) + 
	// 		min(max_index+1, n-max_index);

	//method2 
	// if(min_index+1<n-min_index && max_index+1<n-max_index || 
	// 	n-min_index<min_index+1 && n-max_index<max_index+1){
	// 	return max(min(min_index+1, n-min_index), min(max_index+1, n-max_index));
	// }else{
	// 	return min(min_index+1, n-min_index) + 
	// 		min(max_index+1, n-max_index);
	// }

	// method 3
	return min(min((max(min_index+1, max_index+1)), (n-min(min_index, max_index))),
				min((min_index+1 + n-max_index), (max_index+1 + n-min_index)));
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
		vector<int> stones(n);
		for(int i=0; i<n; i++){
			cin>>stones[i];
		}
		cout<<findsteps(n, stones)<<endl;
	}

	return 0;
}	
//"It's not a bug, It's a feature
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>
#define ll long long int
using namespace std;

bool checkArr(int arr[], int n){
	int countEven=0;
	for(int i=0; i<2*n; i++){
		if(arr[i]%2==0){
			countEven++;
		}
	}
	if(countEven==n) return true;
	else return false;
}

int main(){
	
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	int t,n;
	cin>>t;

	for(int i=0; i<t; i++){
		cin>>n; 
		int arr[2*n];
		for(int i=0; i<2*n; i++){
			cin>>arr[i];
		}
		if(checkArr(arr,n))
			cout<<"Yes";
		else
			cout<<"No";
		cout<<endl;
	}

	return 0;
}	
//"It's not a bug, It's a feature
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>
#define ll long long int
using namespace std;

int findImpossibleBottles(int n, int* a, int* b, int* bottles){
	int counter = 0;
	
	for(int i=0; i<n; i++){
		bottles[b[i]] -= 1;
		if(bottles[a[i]]==0){
			counter++;
		}
		bottles[b[i]] += 1;
	}

	return counter;
}

int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	int a[1000];
	int b[1000];
	int bottles[1001] = {0};
	for(int i=0; i<n; i++){
		cin>>a[i]>>b[i];
		bottles[b[i]] += 1;
	}
	cout<<findImpossibleBottles(n, a, b, bottles);
	return 0;
}	
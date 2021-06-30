//"It's not a bug, It's a feature
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>
#define ll long long int
using namespace std;

ll findPairs(int n, int l, int r, vector<int> arr){

	sort(arr.begin(), arr.end());
	ll answer = 0;
	for(int i=0; i<n; i++){
		auto upper = upper_bound(arr.begin(), arr.end(), r-arr[i]) - arr.begin();
		auto lower = lower_bound(arr.begin(), arr.end(), l-arr[i]) - arr.begin();
		if (l <= 2 * arr[i] && 2 * arr[i] <= r) {
	    	lower++;
	    }
	    if(upper>lower) answer += upper-lower;
	}
    return (answer/2);
}

int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

	int t;
	cin>>t;
	int n,l,r;
	for(int i=0; i<t; i++){
		cin>>n>>l>>r;
		vector<int> arr(n);
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		cout<<findPairs(n, l, r, arr)<< "\n";	
	}

	return 0;
}	
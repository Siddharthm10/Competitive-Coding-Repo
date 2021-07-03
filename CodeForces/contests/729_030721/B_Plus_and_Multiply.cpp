//"It's not a bug, It's a feature
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>
#define ll long long int
using namespace std;

//O(N)
// bool checkN(ll n, ll a, ll b){
// 	if(n==1) return true;
// 	else if(n<1) return false;
// 	else if(n%b==1) return true;
// 	else if(a==1) return (n%b==1);
// 	if(n%a==0 && a!=1)
// 		while(n%a==0)
// 			n /= a;
// 	else
// 		n -= b;

// 	return checkN(n,a,b);
// }


bool checkN(ll n, ll a, ll b){
    if (a == 1){
        if ((n-1)%b == 0)
            return true;
        else
            return false;
    }
 
    for (int i = 0; i < 32; i++){
        ll temp = n;
        if (pow(a,i) > n)
            break;
        
        temp -= pow(a, i);

        if (temp % b == 0)
            return true;
    }
    return false;
}



int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll t;
	cin>>t;
	for(ll i=0; i<t; i++){
		ll n,a,b;
		cin>>n>>a>>b;
		if(checkN(n,a,b))
			cout<<"Yes";
		else 
			cout<<"No";
		cout<<endl;
	}

	return 0;
}	
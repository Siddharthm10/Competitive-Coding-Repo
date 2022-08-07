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

	int n;
	string a,b;
	int counter=0;

	cin>>n;
	cin>>a>>b;
	
	for(int i=0; i<n-1; i++)
	{
		if(a[i]!=b[i] && a[i+1]!=b[i+1])
		{
			swap(a[i], a[i+1]);
			counter++;
		}
		else if(a[i]!=b[i])
		{
			counter++;
			if(a[i]=='0')
				a[i]='1';
			else
				a[i]='0';
		}
	}
	if(a[n-1]!=b[n-1]) 
	{
		counter++;
		if(a[n-1]=='0')
			a[n-1]='1';
		else
			a[n-1]='0';
	}

	// cout<<a<< " "<< b;
	cout<<counter;

	return 0;
}	
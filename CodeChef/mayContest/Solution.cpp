//"It's not a bug, It's a feature
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>

using namespace std;


int main(){
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
		//unit rise
		int beta = 0;
		//temperature
		int temp = 0;
		//initial solublity
		int alpha = 0;

		cin>>temp>>alpha>>beta;
		cout<<(alpha+(100-temp)*beta)*10<<endl;
	}

	return 0;
}
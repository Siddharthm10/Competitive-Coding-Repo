#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


void operations(vector<int> &a, int n, int k){
    int startIndex = 0;
    while(a[startIndex]==0){
        startIndex++;
        if(startIndex==a.size()-1) return;
    }
    int maxIndex = a.size()-1 ;
    for(int i=a.size()-2; i>=startIndex+1; i--){
        if(a[i]>a[maxIndex]){
            maxIndex = i;
        }
    }
    if(a[startIndex]>k){
        a[startIndex] -= k;
        a[maxIndex] += k;
    }else{
        a[maxIndex] += a[startIndex];
        a[startIndex] = 0;
    }
}

int main(){
	int t;
	cin>>t;
	int n,k;
	for(int i=0; i<t; i++){
		cin>>n>>k;
	    vector<int> a(n);
		for(int j=0; j<n; j++){
			cin>>a[j];
		}
		operations(a,n,k);
        print(a);
	}
	return 0;
}
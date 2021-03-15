//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define pi 3.1415926535
#define fu(i,n) for(int i=0; i<n; i++)
#define fd(i,n) for(int i=n; i>=0; i--)
#define ll long long int

using namespace std;

void print(int* arr, int n){
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
}

void isPossible(int* a, int n){
    bool isIt = false;
    int b[n];
    int start=-1;
    int end=-1;

    for(int i=1; i<n; i++){
        if(a[i]<=a[i-1]){
            if(start==-1){
                start=i;
            }
            end = i;
        }
    }
    
    start = start-1;
    // cout<< "Start variable is set to " << start << endl;
    // cout<< "End variable is set to " << end << endl;

    for(int i=0; i<start; i++){
        b[i] = a[i];
    }

    
    for(int i=start, j=end; i<end+1, j>=start; i++, j--){
        b[j] = a[i];
    }

    
    for(int i=end+1; i<n; i++){
        b[i] = a[i];
    }
    if(!is_sorted(a,a+n)){
        if(is_sorted(b, b+n)){
            cout<<"yes"<<endl;
            cout<< start+1 << " " << end+1<< endl;
        }else{
            cout<< "no";
        }
    }
    else{
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    isPossible(a, n);
    return 0;
}
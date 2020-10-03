#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 

using namespace std;

int main(){
    //  rading inputs
    int n;
    cin>>n;
    int count=0;
    int p[n],q[n];
    for(int i=0; i<n; i++){
        cin>>p[i]>>q[i];
    }

    for(int i=0; i<n; i++){
        if(q[i] - p[i] >= 2){
            count++;
        }
    }
    cout<<count;
    return 0;
}
#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 

using namespace std;

int main(){
    int n;
    cin>>n;
    int orientations[n];
    int count=1;
    for(int i=0; i<n; i++){
        cin>>orientations[i];
    }

    for(int j=1;j<n; j++){
        if(orientations[j]!=orientations[j-1])
            count++;
    }
    cout<<count;
    return 0;
}
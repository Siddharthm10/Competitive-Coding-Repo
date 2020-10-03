#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 

using namespace std;



int main(){
    // reading variables
    int n;
    cin>>n;
    int gifted_to[n];
    int gifted_by[n];
    
    for(int i=0; i<n; i++){
        cin>>gifted_to[i];
    }

    for(int j=1; j<n+1; j++){
        auto itr = find(gifted_to, gifted_to+n, j);
        int index = distance(gifted_to, itr);
        gifted_by[j-1]=index+1;
    }

    // displaying 
    for(int i=0;i<n;i++){
        cout<<gifted_by[i]<<" ";
    }
    return 0;
}
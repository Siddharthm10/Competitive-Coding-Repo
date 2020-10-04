#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 

using namespace std;

int main(){

    int arr[4];
    int count=0;
    // Basically we have to figure out how many are same and the answer to the problem is that -1
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    sort(arr,arr+4);
    for(int i=1; i<4; i++){
        if(arr[i]==arr[i-1])
            count++;
    }
    cout<<count;
    return 0;
}
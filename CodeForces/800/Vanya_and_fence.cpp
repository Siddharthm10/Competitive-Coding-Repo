#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 

using namespace std;

int main(){
    int n,h;
    cin>>n>>h;
    int heights[n];
    int count=0;
    for(int i=0; i<n; i++){
        cin>>heights[i];
        if(heights[i]>h)
            count+=2;
        else
            count+=1;
    }
    cout<<count;
    return 0;
}
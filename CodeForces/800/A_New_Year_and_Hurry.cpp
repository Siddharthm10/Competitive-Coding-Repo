//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define fo(i,n,j) for(int i=0; i<n; i=i+j)
using namespace std;

int time_req_for_problems(int n){
    int time_req = 5*(n)*(n+1)/2;
    return time_req;
}

int main()
{
    int n,k;
    cin>>n>>k;
    //write code here
    int answer;
    int time_remaining = 4*60-k;
    int time_req = time_req_for_problems(n);
    if(time_remaining>=time_req) cout<<n;
    else {
        for(int i=n-1;i>=0;i--){
            if(time_remaining>=time_req_for_problems(i)) {
                answer=i;
                cout<<answer;
                break;
            }
            
        }
    }
    return 0;
}
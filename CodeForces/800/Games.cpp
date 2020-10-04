#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 

using namespace std;

int main(){
    int n;
    cin>>n;
    int total_games = n*(n-1);
    int h[n],a[n];
    // Question : number of time the host team is going to put on the guests uniform
    int answer=0;
    for(int i=0;i<n;i++){
        cin>>h[i]>>a[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                if(h[i]==a[j]){
                    answer++;
                }
            }
        }
        
    }
    cout<<answer;

    return 0;
}
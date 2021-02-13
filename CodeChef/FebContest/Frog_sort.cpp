//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define pi 3.1415926535
#define fu(i,n) for(int i=0; i<n; i++)
#define fd(i,n) for(int i=n; i>=0; i--)

using namespace std;

int backPat(int N, vector<int> weights, vector<int>jumps){
    int numPats=0;
    vector<int> pos(N);
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(weights[j]==i+1){
                pos[i]=j;//gives the position according the to weight
                break;
            }
        }
        if(i>0){
            int position = pos[i]; //position
            while(pos[i]<=pos[i-1]){ 
                pos[i]+=jumps[position];
                numPats++;
            }
        }
        // cout<< "position: " << pos[i] << endl;
    }
    return numPats;
    
}

int main()
{
    int T;
    cin>>T;
    int N;
    for(int i=0; i<T; i++){
        cin>>N;
        vector<int> W(N);
        vector<int> L(N);
        for(int j=0; j<N; j++){
            cin>>W[j];
        }
        for(int j=0; j<N; j++){
            cin>>L[j];
        }
        cout<<backPat(N,W,L)<<endl;
    }

    return 0;
}
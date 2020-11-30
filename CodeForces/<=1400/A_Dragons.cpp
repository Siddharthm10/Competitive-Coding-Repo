//"It's not a bug, It's a feature
// 1000,greedy,sortings
// 29 mins
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define pi 3.1415926535
#define fu(i,n,j) for(int j=i; j<n; j++)
#define fd(i,n,j) for(int j=i; j>=0; j--)
#define inf 100000000

using namespace std;
bool sortcol( const vector<int>& v1, const vector<int>& v2 ) { 
    return v1[1] < v2[1]; 
} 

bool canHe(int n, int s, vector<vector<int>>strengths){
    bool answer = false;
    bool found = false;
    for(int i=0; i<n; i++){
        sort(strengths.begin(), strengths.end(), sortcol);
        for(int j=0; j<n; j++){
            if(s>strengths[j][0]){
                s+=strengths[j][1];
                strengths[j][0]=inf;
                strengths[j][1]=-1;
                found = true;
                break;
            }
        }
        if(!found){return false;}
        else if(found&&i==n-1){answer=true;}
        else{found = false;}
    }

    return answer;
}


int main()
{
    // TAKING INPUTS
    
    int n,s;
    // n - no of dragons
    // s - strength of kirito

    cin>>s>>n;
    vector<vector<int>> strengths(n,vector<int> (2, 0));
    fu(0,n,i){
        cin>>strengths[i][0]>>strengths[i][1];
    }
    //write code here
    bool answer = canHe(n,s,strengths);
    if(answer){cout<<"YES";}
    else{cout<<"NO";}

    return 0;
}

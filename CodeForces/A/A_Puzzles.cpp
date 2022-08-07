//"It's not a bug, It's a feature
// 900, greedy
// 15 min
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define pi 3.1415926535
#define fu(i,n,j) for(int j=i; j<n; j++)
#define fd(i,n,j) for(int j=i; j>=0; j--)
#define inf 1000000000

using namespace std;

int difference(int n, int m, vector<int> pieces){
    int minDifference=inf;
    sort(pieces.begin(), pieces.end());
    int A, B;
    for(int i=0; i+n-1<m; i++){
        A=pieces[i];
        // cout<<A<<endl;
        B=pieces[i+n-1];
        int diff = B-A;
        // cout<<diff<<endl;
        if(minDifference>diff){minDifference=diff;}
    }
    return minDifference;
}


int main()
{
    int n,m;
    // n- number of students
    // m- number of puzzles in the shop
    cin>>n>>m;
    vector<int> pieces(m);
    // pieces in each puzzle
    fu(0,m,i){
        cin>>pieces[i];
    }
    //write code here
    cout<<difference(n,m,pieces);
    return 0;
}

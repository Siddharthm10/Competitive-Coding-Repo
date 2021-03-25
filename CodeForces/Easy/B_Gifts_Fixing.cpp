//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define fu(i,n,j) for(int i=0; i<n; i=i+j)
#define fd(i,n,j) for(int i=n; i>0; i=i-j)
#define PI 3.1415926535897932384626
using namespace std;

long long minMoves(long long* a, long long* b, int n){
    // a and b have to be taken care of seperately
    long long a_min = *min_element(a, a+n);
    long long b_min = *min_element(b, b+n);
    long long moves = 0;
    fu(i,n,1){
        long long a_distance = a[i] - a_min;
        long long b_distance = b[i] - b_min;
        moves+=max(a_distance,b_distance);
        // cout<<moves<<" ";
    }
    return moves;
}

int main()
{
    int t;
    int n;
    cin>>t;
    fu(i,t,1){
        cin>>n;
        long long a[n];
        long long b[n];
        fu(j,n,1)
            cin>>a[j];
        fu(j,n,1)
            cin>>b[j];

        // minimum moves function
        cout<<minMoves(a,b,n)<<endl;
    }
    return 0;
}
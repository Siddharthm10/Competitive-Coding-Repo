//"It's not a bug, It's a feature
// 1000, math
// 16 min
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define pi 3.1415926535
#define fu(i,n,j) for(int j=i; j<n; j++)
#define fd(i,n,j) for(int j=i; j>=0; j--)

using namespace std;

int possiblePositions(int n, int a, int b){
    if(a+b==n){return b;}
    else{return (n-a>b+1)?(b+1):(n-a);}
}

int main()
{
    int n,a,b;
    // number of people in the line
    // no of min people ahead of him
    // no. of max people behind him
    cin>>n>>a>>b;
    cout<<possiblePositions(n,a,b);
    //write code here
    return 0;
}   
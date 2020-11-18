//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define fu(i,n,j) for(int i=0; i<n; i=i+j)
#define fd(i,n,j) for(int i=n; i>0; i=i-j)
#define PI 3.1415926535897932384626
using namespace std;

int minArea(int a, int b){
    int ansSide = min({a+b,2*b,2*a});
    if (ansSide==2*a&&ansSide<b){ansSide=b;}
    else if (ansSide==2*b && ansSide<a){ansSide=a;}
    return ansSide*ansSide;
}


int main()
{
    int t;
    cin>>t;
    int a[t], b[t];
    fu(i,t,1){
        cin>>a[i];
        cin>>b[i];

    // minArea of the square function
        cout<<minArea(a[i],b[i])<<endl;
    }
    return 0;
}
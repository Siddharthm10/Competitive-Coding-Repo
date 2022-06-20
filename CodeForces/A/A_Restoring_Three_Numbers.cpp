//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define fo(i,n,j) for(int i=0; i<n; i=i+j)
using namespace std;

int main()
{
    int x[4];
    fo(i,4,1) cin>>x[i];
    sort(x,x+4);
    //write code here   
    int a,b,c;
    c = x[3]-x[0];
    b = x[1]-c;
    a = x[2]-c;

    cout<<a<<" "<<b<<" "<<c<<" ";
    return 0;
}
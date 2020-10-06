//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define fo(i,n,j) for(int i=0; i<n; i=i+j)
using namespace std;

int main()
{
    int n;
    cin>>n;
    int points[n];
    fo(i,n,1) cin>>points[i];
    //write code here
    int amazing=0;
    fo(i,n,1){
        if(i>0){
            fo(j,i,1){
                if(points[i]>points[j])
                    if(j==i-1){amazing++;cout<<1<<" ";}
                if(points[i]<points[j]) 
                    if(j==i-1){amazing++;cout<<2<<" ";}
            }
        }
    }
    cout<<(amazing);
    return 0;
}
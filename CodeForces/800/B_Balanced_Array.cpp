//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define fu(i,n,j) for(int i=0; i<n; i=i+j)
#define fd(i,n,j) for(int i=n; i>0; i=i-j)
#define PI 3.1415926535897932384626

using namespace std;

int main()
{
    int t;
    cin>>t;
    int n[t];
    fu(i,t,1) cin>>n[i];

    // n is even
    // first n/2 elements even
    // next n/2 elements odd
    // elements distinct and positive
    // sum of first n/2 elements = sum of next n/2 elements
    fu(i,t,1){
        if(n[i]>2){
            if((n[i]/2)%2==0){
                cout<<"YES"<<endl;
                fu(j,n[i]/2,1){
                    cout<<(j+1)*2<<" ";
                }
                fu(j,n[i]/2-1,1){
                    cout<<(2*j+1)<<" ";
                }
                cout<<(n[i]/2*(n[i]/2+1) - (n[i]/2-1)*(n[i]/2-1))<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }


    return 0;
}
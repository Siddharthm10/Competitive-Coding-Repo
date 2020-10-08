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
    string a[t],b[t];


    fu(i,t,1){
        cin>>b[i];
    }

    fu(i,t,1){
        int len = b[i].length();
        string temp=b[i];
        // temp[0]=b[i][0];
        // int traverser=0;
        // for(int k=1,j=1; j<len; j+=2,k++){
        //     temp[k]=b[i][j];
        // }
        // cout<<temp<<endl;
        cout<<temp[0];
        for(int j=1; j<len; j+=2){
            cout<<temp[j];
        }
        cout<<endl;
    }
    return 0;
}
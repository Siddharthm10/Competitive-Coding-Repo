//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <list>
#include <stdio.h>
#include <iostream>
#define pi 3.1415926535
#define fu(i,n) for(int i=0; i<n; i++)
#define fd(i,n) for(int i=n; i>=0; i--)
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin>>t;
    //write code here
    for(int i=0; i<t; i++){
        int n,k;
        cin>>n>>k;

        set<int> S;
        int temp;
        for(int j=0; j<n; j++){
            cin>>temp;
            S.insert(temp);
        }
        
        if(S.size() > k){
            cout<< -1<<endl;
        }
        else{
            cout<<n*k<<endl;
            for (int i=0;i<n;i++){
                //print the distinct numbers
                for(set<int>::iterator ite=S.begin();ite!=S.end();ite++)
                    cout<<*ite<<' ';
                //print the extra 1s
                for (int j=0;j<k-(int)S.size();j++)
                    cout<<1<<' ';
            }
            cout<<endl;
        }
    }
    return 0;
}
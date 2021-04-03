//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#include <list>
#define pi 3.1415926535
#define fu(i,n) for(int i=0; i<n; i++)
#define fd(i,n) for(int i=n; i>=0; i--)
#define ll long long int

using namespace std;

void check(int n, int k, string input){
    int counter = 0;
    bool answer = false;
    for(int i=0; i<n; i++){
        if(input[i]=='*'){counter++;}
        else{counter=0;}
        if(counter>=k){answer = true; break;}
    }
    if(answer){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}

int main()
{
    int T;
    cin>>T;
    int n, k;
    string input;
    for(int i=0; i<T; i++){
        cin>>n>>k;
        cin>>input;
        check(n,k,input);
        if(i!=T-1){
            cout<<endl;
        }
    }
    return 0;
}
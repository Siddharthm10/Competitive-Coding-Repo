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

ll countTotal(ll N){
    ll x = N/4;
    ll r = N%4;
    ll answer = 0; 
    answer = x*44;
    if(r==0){answer+=0;}
    else if(r==1){answer+=20;}
    else if(r==2){answer+=36;}
    else if(r==3){answer+=51;}
    if(x>0){
        answer+=4*(4-r);
    }
    return answer;
}

int main()
{
    ll T;
    cin>>T;
    ll N;
    for(ll i=0; i<T; i++){
        cin>>N;
        cout<<countTotal(N);
        if(i!=T-1){
            cout<<endl;
        }
    }
    
    return 0;
}
//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define pi 3.1415926535
#define ll long long int
#define fu(i,n) for(int i=0; i<n; i++)
#define fd(i,n) for(int i=n; i>=0; i--)

using namespace std;

void maxFunc(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll j=0; j<n; j++){
        cin>>a[j];
    }
    sort(a, a+n);
    ll maxValue = 2*(a[n-1] - a[0]);
    cout<<maxValue<<endl;
}

int main()
{
    ll T;
    cin>>T;
    for(ll i=0; i<T; i++)
        maxFunc();
    
    return 0;
}
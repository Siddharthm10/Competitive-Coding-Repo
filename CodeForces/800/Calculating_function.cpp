#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 

using namespace std;

int main(){
    long long n;
    cin>>n;
    long long sum=0;
    if(n%2==1)
    {   sum = ((n-1)/2)*((n-1)/2) + ((n-1)/2);
        sum -= ((n+1)/2)*((n+1)/2);
        }
    else
    {
        sum = ((n)/2)*((n)/2) + ((n)/2);
        sum -= ((n)/2)*((n)/2);
    }
    cout<<sum;

    return 0;
}
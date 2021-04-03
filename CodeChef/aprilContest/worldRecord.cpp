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

float roundingToTwo(float x){
    float rounded = std::floor((x * 100) + .5) / 100;
    return rounded;
}

void checkPoss(float k1, float k2, float k3, float maxSpeed){
    float timeToBeat = 9.58;
    float timeTaken = 100/(k1*k2*k3*maxSpeed);
    timeTaken = roundingToTwo(timeTaken);
    if(timeTaken<timeToBeat){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}

int main()
{
    int T;
    cin>>T;
    float k1,k2,k3;
    float maxSpeed;
    for(int i=0; i<T; i++){
        cin>>k1>>k2>>k3>>maxSpeed;
        checkPoss(k1,k2,k3,maxSpeed);
        if(i!=T-1){
            cout<<endl;
        }
    }
    return 0;
}
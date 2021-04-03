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

bool checkPoss(int a, int b, int c){
    return (a==b)?true:((a==c)?true:((b==c)?true:false));
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    bool answer = checkPoss(a,b,c);
    if(answer){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define pi 3.1415926535
#define fu(i,n) for(int i=0; i<n; i++)
#define fd(i,n) for(int i=n; i>=0; i--)
#define ll long long int

using namespace std;

bool ifPossible(double n, double d){
    bool answer = false;

    if(d<=n){
        answer=true;
        return answer;
    }
    else{
        for(int i=1; i<n; i++){
            double x=i; 
            double output = x+ceil(d/(x+1));
            if(output<=n){
                answer=true;
                // cout<<x<< ceil(float(d/(x+1)))<< " "<< output<<" "<<n <<" " << d <<" ";
                return answer;       
            }
        }
    } 
    return answer;
}

int main()
{
    int T;
    cin>>T;
    //write code here
    for(int i=0; i<T; i++){
        double n,d;
        cin>>n>>d;
        bool answer = ifPossible(n,d);
        if(answer){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

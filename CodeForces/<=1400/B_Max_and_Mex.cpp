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

double mex(multiset<int> S){
    double mexInt;
    int i=0;
    // if(*S.begin()!=0){return 0;}
    while(true){
        if(S.count(i)=0)
    }
    return i+1;
}

double max(multiset<int> S){
    double maxInt;
    auto itr = S.end();
    itr--;
    maxInt = *itr;
    return maxInt;
}

int distinctNos(multiset<int> S, int n, int k){
    int answer;
    double a,b;
    int toInsert;
    for(int i=0; i<k; i++){
        a = mex(S);
        b = max(S);
        toInsert = ceil((a+b)/2);
        S.insert(toInsert);
    }
    // cout<<"MEX: "<<a<<" Max: "<<b<<" To insert: "<<toInsert<<endl;
    set<int> final;
    for(auto itr=S.begin(); itr!=S.end(); itr++){
        final.insert(*itr);
    }
    return final.size();
}

int main()
{
    int t;
    cin>>t;
    //write code here
    for(int i=0; i<t; i++){
        multiset<int> a;
        int n,k;
        cin>>n>>k;
        int temp;
        for(int j=0; j<n; j++){
            cin>>temp;
            a.insert(temp);
        }
        cout<<distinctNos(a, n, k)<<endl; 
    }
    return 0;
}
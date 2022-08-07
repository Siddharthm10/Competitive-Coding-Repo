//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define fu(i,n,j) for(int i=0; i<n; i=i+j)
#define fd(i,n,j) for(int i=n; i>0; i=i-j)
#define PI 3.1415926535897932384626
using namespace std;

int crimeUntreated(int n, vector<int> response){
    int count=0;
    int liveRes;
    int numberOfOfficers=0;
    fu(i,n,1){
        liveRes = response[i];
        if(liveRes>0){
            numberOfOfficers+=liveRes;
        }
        else{
            if(numberOfOfficers>0)
                numberOfOfficers--;
            else{
                count++;
                numberOfOfficers=0;
            }    
        }
    }
    
    return count;
}

int main()
{
    int n;
    cin>>n;
    vector<int> response(n);
    fu(i,n,1){
        cin>>response[i];
    }
    cout<<crimeUntreated(n,response);
    return 0;
}
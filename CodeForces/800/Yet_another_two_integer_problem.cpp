//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define fu(i,n,j) for(int i=0; i<n; i=i+j)
#define fd(i,n,j) for(int i=n; i>0; i=i-j)
#define PI 3.1415926535897932384626
using namespace std;

vector<int> minMoves( int n, vector<vector<int>> problemSet){
    vector<int> ans;
    fu(i,n,1){
        int a=problemSet[i][0];
        int b=problemSet[i][1];
        int diff=abs(a-b);
        int count;

        if(a==b){ans.push_back(0);}
        else{
            if(diff%10==0)
                count = diff/10;
            else
                count = diff/10 + 1;
            ans.push_back(count);
        }
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> problemSet(n, vector<int> (2,0));
    fu(i,n,1){
        cin>>problemSet[i][0];
        cin>>problemSet[i][1];
    }
    vector<int> ans = minMoves(n,problemSet);
    fu(i,n,1){
        cout<<ans[i]<<endl;
    }

    return 0;
}
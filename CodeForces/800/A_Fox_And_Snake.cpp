//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define for(i,n,j) for(int i=0; i<n; i=i+j)
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int x=0;
    
    //write code here
    // snake starts at (1,1) -> (1,m) -> (3,m) -> (3,1) and then it repeats the same again but in the opp. manner

    // character matrix
    char matrix[n][m]={};
    
    for(i,n,1){
        for(j,m,1){
            if(i%2==0) matrix[i][j]='#';
            else if(x==0 && j==m-1){matrix[i][j]='#';}
            else if(x==1 && j==0){matrix[i][j]='#';}
            else matrix[i][j]='.';
            cout<<matrix[i][j];
        }
        if(i%2==1)
            (x==0)?(x=1):(x=0);
        cout<<endl;
    }
    return 0;
}   
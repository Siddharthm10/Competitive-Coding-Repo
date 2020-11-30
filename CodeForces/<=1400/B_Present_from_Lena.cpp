//"It's not a bug, It's a feature
// 1000
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define pi 3.1415926535
#define fu(i,n,j) for(int j=i; j<n; j++)
#define fd(i,n,j) for(int j=i; j>=0; j--)

using namespace std;

void linePresent(int n){
    int maxX=0;
    bool maxXreached = false;
    for(int i=0; i<2*n+1; i++){
        
        if(maxX==n){maxXreached=true;}
        if(maxXreached&&maxX==0){cout<<maxX;}
        else{cout<<maxX<<" ";}
        if(maxXreached){maxX--;}
        else{maxX++;}
    }
}

void spaces(int n){
    for(int i=0; i<n; i++){
        cout<<" ";
    }
}
 
void present(int n){
    int maxY=0;
    bool maxYreached = false;
    
    for(int i=0; i<2*n+1; i++){
        spaces(2*n-2*maxY);
        linePresent(maxY);
        cout<<endl;
        if(maxY==n){maxYreached=true;}
        if(maxYreached){maxY--;}
        else{maxY++;}
    }
}


int main()
{
    int n;
    cin>>n;
    // max number
    
    //write code here
    // present(n);
    present(n);
    // linePresent(n);
    return 0;
}
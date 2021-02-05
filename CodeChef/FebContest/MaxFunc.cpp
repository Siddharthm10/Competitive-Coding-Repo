//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define pi 3.1415926535
#define fu(i,n) for(int i=0; i<n; i++)
#define fd(i,n) for(int i=n; i>=0; i--)

using namespace std;

int maxFunc(vector<int> A){
    int maxValue=0;
        
}

int main()
{
    int T;
    cin>>T;
    int N;
    int temp;
    for(int i=0; i<T; i++){
        cin>>N;
        vector<int> A(N);
        for(int j=0; j<N; j++)
            cin>>A[j];
        cout<<maxFunc(A)<<endl;
    }
    //write code here
    return 0;
}
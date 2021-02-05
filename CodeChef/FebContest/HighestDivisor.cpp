//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define pi 3.1415926535
#define fu(i,n) for(int i=0; i<n; i++)
#define fd(i,n) for(int i=n; i>=0; i--)

using namespace std;

int highestDivisor(int N){
    int maxNumber = 1;
    for(int i=1; i<=10; i++){
        if(i>maxNumber && N%i==0){
            maxNumber = i;
        }
    }
    return maxNumber;
}


int main()
{
    int n;
    cin>>n;
    //write code here
    cout<< highestDivisor(n);
    return 0;
}
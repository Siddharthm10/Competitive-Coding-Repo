//"It's not a bug, It's a feature
// 900, sorting, greedy
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define pi 3.1415926535
#define fu(i,n,j) for(int j=i; j<n; j++)
#define fd(i,n,j) for(int j=i; j>=0; j--)

using namespace std;

int minMonths(int k, vector<int> inches){
    sort(inches.begin(), inches.end(), greater<int>());
    int counter=0, sum=0;
    while(sum<k){
        sum+=inches[counter];
        counter++;
        if(counter>12){
            counter = -1;
            break;
        }
    }
    return counter;
}

int main()
{
    int k;
    cin>>k;
    vector<int> inches(12);
    for(int i=0; i<12; i++){
        cin>>inches[i];
    }
    //write code here
    cout<< minMonths(k, inches);
    return 0;
}   
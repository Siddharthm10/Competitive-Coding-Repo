//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define pi 3.1415926535
#define fu(i,n) for(int i=0; i<n; i++)
#define fd(i,n) for(int i=n; i>=0; i--)

using namespace std;
int sumSeries(vector<int> series){
    int sum=0;
    fu(i,series.size()){
        sum+=series[i];
    }
    return sum;
}

int flipper(vector<int> series, int i, int j){
    for(int k=i; k<=j; k++){
        series[k] = 1 - series[k];
    }
    int sum = sumSeries(series);
    return sum;
}

void print(vector<int> whatever){
    fu(i,whatever.size()){
        cout<<whatever[i]<<" ";
    }
    cout<<endl;
}

int maxOnes(int n, vector<int> series){
    int maxSum=sumSeries(series);
    int temp=0;
    vector<int> posZeros;
    fu(i,n){
        if(series[i]==0){
            posZeros.push_back(i);
        }
    }
    // print(posZeros);
    if(posZeros.empty()){
        return maxSum-1;
    }
    
    for(int l=0; l<posZeros.size(); l++){
        for(int m=l; m<posZeros.size(); m++){
            temp = flipper(series, posZeros[l], posZeros[m]);
            // temp=sumSeries(series);
            if(temp>maxSum)
                maxSum=temp;
        }
    }
    return maxSum;
}

int main()
{
    int n;
    cin>>n;
    int temp=0;
    vector<int> series;
    //write code here
    fu(i,n){
        cin>>temp;
        series.push_back(temp);
    }
    // print(series);
    cout<<maxOnes(n, series);

    return 0;
}
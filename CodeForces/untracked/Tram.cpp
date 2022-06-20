#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 

using namespace std;

int main(){
    // variables
    int n;
    cin>>n;
    int capacity=0;
    int sum=0;
    // int passengers[n];
    int a[n], b[n];
    // a-> exiting passangers
    // b-> entering passengers

    // getting inputs
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }

    // calculating the capacity required
    for(int i=0;i<n;i++){
        sum += b[i]-a[i];
        if(sum>capacity)
            capacity = sum;
    }

    cout<< capacity;
    return 0;
}
#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 

using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int money_borrowed=0;
    int cost=0;


    // calculating cost
    for(int i=1;i<w+1;i++){
        cost += i*k;
    }
    
    if(cost>n){
        money_borrowed = cost-n;
    }

    cout<<money_borrowed;
    
    return 0;
}
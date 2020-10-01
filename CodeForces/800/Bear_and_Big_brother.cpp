#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 

using namespace std;

int main(){
    
    int w1,w2;
    cin>>w1>>w2;
    int years=0;
    while(w1<=w2){
        w1=w1*3;
        w2=w2*2;
        years++;
    }
    cout<<years;

    return 0;
}
#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 

using namespace std;
int steps_1(int number, int s){
    // cout<<"in 1"<<endl;
    s += number;
    return s;
}

int steps_2(int number, int s){
    // cout<<"in 2"<<endl;
    s += number/2;
    s = steps_1(number%2, s);
    return s;
}

int steps_3(int number, int s){
    // cout<<"in 3"<<endl;
    s += number/3;
    s = steps_2(number%3,s);
    return s;
}
int steps_4(int number,int s){
    // cout<<"in 4"<<endl;
    s += number/4;
    s = steps_3(number%4,s);
    return s;
}

int steps_5(int number, int s){
    // cout<<"in 5"<<endl;
    s += number/5;
    s = steps_4(number%5,s);
    return s;
}








int main(){
    
    int x;
    cin>>x;
    int steps=0;

    steps = steps_5(x,steps);

    cout<<steps;

    return 0;
}

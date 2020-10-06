//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define for(i,n,j) for(int i=0; i<n; i=i+j)
using namespace std;

bool check_prime(int number){
    bool verdict=true;
    for(i,number,1){
        if(i<=int(number/2) && i>1) {
            if(number%i==0) {
                verdict=false;
                break;
            }
            else 
                continue;
        }
    }
    return verdict;
}


int main()
{
    int n;
    cin>>n;
    //write code here
    // n>12 
    // each integer no less than 12 can be expressed as sum of two composite numbers
    // If there are multiple outputs any one of them can be couted
    int answer1, answer2;
    if(n%2==0){
        answer1=n/2,answer2=answer1;
    }
    else{
        answer1=n/2,answer2=n/2+1;
    }
    
    for(i,n,1){
        if(check_prime(answer1)==false&&check_prime(answer2)==false)
            break;
        answer1--;
        answer2++;
    }
    cout<<answer1<<" "<<answer2;

    return 0;
}
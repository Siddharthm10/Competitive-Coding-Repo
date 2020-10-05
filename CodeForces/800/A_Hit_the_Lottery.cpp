//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define for(i,n,j) for(int i=0; i<n; i=i+j)
using namespace std;


int calculation(int &n, int k){
    int answer=0;
    int count;
    count=((n-n%k)/k);
    answer += count;
    n=n-count*k;
    return answer;
}

int main()
{
    int n;
    cin>>n;
    int answer=0;
    //write code here
    // full amount n is to withdrawn in denominations of 1,5,10,20,100,
    int denominations[5] = {100,20,10,5,1};
    for(i,5,1){
        answer+=calculation(n,denominations[i]);
    }
    
    cout<<answer;


    return 0;
}
//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define fo(i,n,j) for(int i=0; i<n; i=i+j)
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    //write code here
    int answer1,answer2;
    answer1=min(a,b);
    a-=answer1;
    b-=answer1;
    answer2 = (max(a,b))/2;
    
    cout<<answer1<<" "<<answer2;
    return 0;
}
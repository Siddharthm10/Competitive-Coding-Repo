//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define fu(i,n,j) for(int i=0; i<n; i=i+j)
#define fd(i,n,j) for(int i=n; i>0; i=i-j)
#define PI 3.1415926535897932384626
using namespace std;

bool comp(int a, int b) 
{ 
    return (a < b); 
} 

int minTravelledDistance(int* distances){
    int minimum = *min_element(distances, distances+3);
    int maximum = *max_element(distances, distances+3);
    int distTravelled =0;

    distTravelled = maximum-minimum ;

    return distTravelled;
}

int main()
{
    int distances[3];
    fu(i,3,1){cin>>distances[i];}
    cout<<minTravelledDistance(distances);
    return 0;
}
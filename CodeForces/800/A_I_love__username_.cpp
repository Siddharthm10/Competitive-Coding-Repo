//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define fo(i,n,j) for(int i=0; i<n; i=i+j)
using namespace std;

int maximum_calculation(int* points, int index){
    int max = *max_element(points,points+index);
    return max;
}
int minimum_calculation(int* points, int index){
    int min = *min_element(points, points+index);
    return min;
}

int main()
{
    int n;
    cin>>n;
    int points[n];
    fo(i,n,1) cin>>points[i];
    // finding max value in points before index 
    int amazing=0;
    fo(i,n,1){
        if(points[i]>maximum_calculation(points,i)) amazing++;
        if(points[i]<minimum_calculation(points,i)) amazing++;
    }
    
    
    cout<<(amazing);
    return 0;
}
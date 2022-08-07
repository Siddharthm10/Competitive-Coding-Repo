//"It's not a bug, It's a feature
//brute force, implementation, 900
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define pi 3.1415926535
#define fu(i,n,j) for(int j=i; j<n; j++)
#define fd(i,n,j) for(int j=i; j>=0; j--)

using namespace std;

void print(int n,  vector<int> vec){
    for(int i=0; i<n; i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}

int no_of_max_ratio(int n, int m, vector<int> pedal, vector<int> rear){
    // int ratio=0;
    int counter=0;
    vector<int> ratio;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(rear[j]%pedal[i]==0){
                ratio.push_back(rear[j]/pedal[i]); 
                // cout<<"The other values (i,j,rear,pedal) are : "<<i<<" "<<j<<" "<<rear[j]<<" "<<pedal[i]<<endl;          
            }
        }
    }
    int max_ratio = *max_element(ratio.begin(), ratio.end());
    counter = count(ratio.begin(), ratio.end(), max_ratio);
    // print(ratio.size(), ratio);
    
    return counter;    
}

int main()
{
    /*
    n -> number of stars attached
    m -> number of stars attached to the rear wheel axle
    a[i] -> number of teeth on pedal axle
    b[i] -> number of teeth on rear axle
    */
    //write code here
    int n;
    cin>>n;
    vector<int> pedal(n);
    int temp;
    for(int i=0; i<n; i++){
        cin>>temp;
        pedal[i] = temp;
    }
    int m;
    cin>>m;
    vector<int> rear(m);
    for(int i=0; i<m; i++){
        cin>>temp;
        // cout<<temp<<endl;
        rear[i] = temp;
    }
    

    cout<< no_of_max_ratio(n,m,pedal,rear);
    return 0;
}
//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define fu(i,n,j) for(int i=0; i<n; i=i+j)
#define fd(i,n,j) for(int i=n; i>0; i=i-j)
#define PI 3.1415926535897932384626
using namespace std;

int maxSum(int* a, int* b, int swaps, int n){
    int min_a = 31;
    int min_a_index;
    int max_b = 0;
    int max_b_index;
    int sum=0;
    for(int i=0; i<n; i++){
        if(a[i]<min_a){min_a_index=i; min_a = a[i];}
        if(b[i]>max_b){max_b_index=i; max_b = b[i];}
        sum+=a[i];
        // cout<<sum<<"//"<<min_a<<"//"<<max_b<<"//";
    }
    
    
    if(min_a>=max_b||swaps==0){
        return sum;
    }
    else{
        int temp = a[min_a_index];
        a[min_a_index] = b[max_b_index];
        b[max_b_index] = temp;
        swaps--;
        return maxSum(a,b,swaps,n);
    }
    
}

int main()
{
    int t;
    cin>>t;
    int n, swaps;
    fu(i,t,1){
        cin>>n>>swaps;
        int a[n],b[n];
        fu(j,n,1){
            cin>>a[j];
        }

        fu(j,n,1){
            cin>>b[j];
        }

        cout<<maxSum(a,b,swaps,n)<<endl;
    }
    
    
    return 0;
}
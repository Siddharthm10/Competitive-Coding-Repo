//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define fu(i,n,j) for(int i=0; i<n; i=i+j)
#define fd(i,n,j) for(int i=n; i>0; i=i-j)
#define PI 3.1415926535897932384626
using namespace std;


int* delete_array(int* arr, int index, int t){
    copy(arr+index, arr+t, arr+index-1 );
    return arr;
}

int main()
{
    int t;
    cin>>t;
    int n[t];
    fu(i,t,1){
        cin>>n[i];
        int a[n[i]]; 
        fu(j,n[i],1) cin>>a[j];
        sort(a,a+n[i]);
        if(n[i]==1) cout<<"YES"<<endl;
        else{
            fu(j,n[i],1){
                if(j>0){
                    if(a[j]-a[j-1]>1){
                        cout<<"NO"<<endl;
                        break;
                    }
                    else if(j==n[i]-1){
                        cout<<"YES"<<endl;
                    }
                }
            }
            
        }
    }

    return 0;
}
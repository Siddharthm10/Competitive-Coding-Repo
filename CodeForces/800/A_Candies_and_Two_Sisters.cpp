//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define for(i,n,j) for(int i=0; i<n; i=i+j)
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n[t];
    for(i,t,1) cin>>n[i];
    int a,b;
    int count;
    // bool verdict=true;
    //write code here

    //  a>0 && b>0 && a>b && a+b=n && a,b are integers
    // distribute for next t cases

    
    // Loop approach 
    // for(i,t,1){
    //     if(n[i]>2){
    //         b=1,a=n[i]-1;
    //         count=0;
    //         for(j,n[i],1){
    //             if(a>b) {
    //                 count++;
    //                 a--;
    //                 b++;
    //             }
    //             else break;
    //         }
    //         cout<<count<<endl;
    //     }
    //     else cout<<0<<endl;
    // }

    for(i,t,1){
        if(n[i]>2){
            b=1,a=n[i]-1;
            if(n[i]%2==0){
                count = a-n[i]/2;
                cout<<count<<endl;
            }
            else{
                count = ((n[i]-1)/2);
                cout<<count<<endl;
            }
        }
        else cout<<0<<endl;
    }


    return 0;
}
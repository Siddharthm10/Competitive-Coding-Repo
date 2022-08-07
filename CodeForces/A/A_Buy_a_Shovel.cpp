//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define fu(i,n,j) for(int i=0; i<n; i=i+j)
#define fd(i,n,j) for(int i=n; i>0; i=i-j)
#define PI 3.1415926535897932384626
using namespace std;

int main()
{
    int k,r;
    cin>>k>>r;
    int shovel=10;
    // number of shovels bought = (117x - 3) %10 ==0; if the penny is not used 117x%10 == 0;
    fu(i,10,1){
        if((k*(i+1)-r)%10 == 0) {
            shovel = i+1;
            break;
        }
        else if((k*(i+1))%10==0){
            shovel = i+1;
            break;
        }
    }
    cout<<shovel;
    return 0;
}
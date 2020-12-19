
//"It's not a bug, It's a feature
//900, greedy, sortings

#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define pi 3.1415926535
#define fu(i,n,j) for(int j=i; j<n; j++)
#define fd(i,n,j) for(int j=i; j>=0; j--)

using namespace std;

int max_money_earnt(int n, int m, vector<int> price){
    sort(price.begin(), price.end());
    int money=0;
    for(int i=0; i<m; i++){
        if(price[i]>=0){break;}
        money+=abs(price[i]);
    }
    return money;
}

int main()
{
    /* 
    
    n -> number of TV's
    tv[i] = a[i] rs.
    Some may have a negative price.
    m -> number of tvs bob can carry
    
    */

    //write code here
    int n,m;
    cin>>n>>m;
    int temp;
    vector<int> price(n);
    for(int i=0; i<n; i++){
        cin>>temp;
        price[i] = temp;
    }

    cout<<max_money_earnt(n,m,price);

    return 0;
}
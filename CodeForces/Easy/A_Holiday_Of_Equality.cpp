//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define fu(i,n,j) for(int i=0; i<n; i=i+j)
#define fd(i,n,j) for(int i=n; i>0; i=i-j)
#define PI 3.1415926535897932384626
using namespace std;

// the welfares have to be equalised
int amountSpent(int n, int* welfare){
    int amount=0;
    int maximum=*max_element(welfare,welfare+n);

    fu(i,n,1){
        amount+=maximum - welfare[i];
    }
    return amount;
}

int main()
{
    int n;
    cin>>n;
    int welfare[n];
    fu(i,n,1){cin>>welfare[i];}
    cout<<amountSpent(n, welfare);
    return 0;
}
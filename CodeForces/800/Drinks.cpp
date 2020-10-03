#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 

using namespace std;
// typecasting between floats and ints, scientific notation
int main(){
    int n;
    cin>>n;
    float num = n;
    float volume_faction=0;
    float p[n];

    for(int i=0; i<n; i++){
        cin>>p[i];
    }

    // making cocktail with equal percentage
    float eq_p = (100/(num));
    // cout<<eq_p<<endl;
    for(int j=0; j<n; j++){
        volume_faction += ((p[j])*eq_p/100);
    }
    cout.precision(7);
    cout<<fixed;
    cout<<volume_faction;
    return 0;
}
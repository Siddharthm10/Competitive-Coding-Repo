#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
    int  t;
    cin>>t;
    string A;
    int arr[A.length()+1];
    while(t--)
    {
        cin>>A;
        for(int i=0; i<A.length(); i++)
        {
            arr[i] = int(A[i]-'0');
        }
        int counter=0;
        if(A[0]==1){A.insert(1, "0");}
        else{A.insert(0, "1");}
        cout<<A<<endl; 
    }

    return 0;
}   

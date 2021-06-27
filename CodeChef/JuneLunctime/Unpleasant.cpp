#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void arrangeEvenOdd(int* arr, int n)
{
    for(int i=0, j=0; i<n&&j<n;)
    {
        if(arr[i]%2==0)
        {
            i++;
            j++;
        }
        else if(arr[j]%2!=0)
        {
            j++;
        }
        else if(arr[j]%2==0 && arr[i]%2==1)
        {
            swap(arr[i], arr[j]);
        }
    }
}


//O(N)
int main(){
    int  t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        arrangeEvenOdd(arr, n);
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}   

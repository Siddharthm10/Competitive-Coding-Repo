#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int max = *max_element(arr,arr+n);
    int min = *min_element(arr,arr+n);
    int index_max;
    int index_min;
    for(int i=0; i<n; i++){
        if(arr[i]==max){
            index_max=i;
            break;
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]==min){
            index_min=i;
        }
    }
    // cout<<index_max<<" "<<index_min<<endl;
    if(index_max>index_min)
        cout<<(index_max+n-index_min-1-1);
    else
        cout<<(index_max+n-index_min-1);
    
    return 0;
}
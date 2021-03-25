#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    int count[n];
    int temp;//saving the quotient
    int temp2;//saving the next multiple
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0; i<n; i++){
        count[i]=0;
        if(a[i]%b[i]!=0){
            temp = a[i]/b[i];
            temp2 = b[i]*(temp+1);
            count[i]=temp2-a[i];
        }
    }
    for(int i=0;i<n;i++)
        cout<<count[i]<<endl;
    return 0;
}
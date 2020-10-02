#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 

using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    string q;    
    cin>>q;
    string answer=q;


    for(int j=0; j<t; j++){
        q=answer;
        for(int i=1;i<n;i++){
            if(q[i-1]=='B' && q[i]=='G'){
                swap(answer[i],answer[i-1]);
            }
        }
    }
    cout<<answer;
    return 0;
}
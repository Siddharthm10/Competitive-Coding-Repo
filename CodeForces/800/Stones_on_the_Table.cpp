#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 

using namespace std;

int main(){
    
    int n;
    cin>>n;
    string colors;
    cin>>colors;
    int answer=0;
    
    for(int i=1; i<n; i++){
        if(colors[i]==colors[i-1]){
            answer++;
        }
    }
    cout<<answer;
    return 0;
}
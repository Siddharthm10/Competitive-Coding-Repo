#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h> 

using namespace std;

int main(){
    int n;
    cin>>n;
    int responses[n];
    string verdict = "EASY";
    for(int i=0;i<n;i++){
        cin>>responses[i];
        if(responses[i]==1)
            verdict = "HARD";
    }
    cout<<verdict;
    return 0;
}
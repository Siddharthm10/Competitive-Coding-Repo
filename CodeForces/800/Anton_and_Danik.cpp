#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 

using namespace std;

int main(){
    // variables
    int n;
    cin>>n;
    string won;
    cin>>won;
    int scoreA=0, scoreB=0;

    // Code
    for(int i=0; i<n; i++){
        if(won[i]=='A')
            scoreA++;
        else if(won[i]=='D')
            scoreB++;
    }

    if(scoreA>scoreB)
        cout<<"Anton";
    else if(scoreA<scoreB)
        cout<<"Danik";
    else
        cout<<"Friendship";
    
    return 0;
}
#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 

using namespace std;

int main(){
    // reading inputs
    string n;
    cin>>n;
    int count=0;

    // counting the occurences  
    for(int i=0; i<n.length(); i++){
        if(n[i]=='4'||n[i]=='7'){
            count++;
        }
    }

    if(count==4||count==7){
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    

    return 0;
}
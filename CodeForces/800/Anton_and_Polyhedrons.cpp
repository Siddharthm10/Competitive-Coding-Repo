#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 

using namespace std;


int main(){
    int n;
    cin>>n;
    // string input[n];
    string temp;
    int faces=0;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp[0]=='T'){faces+=4;}
        else if(temp[0]=='C'){faces+=6;}
        else if(temp[0]=='O'){faces+=8;}
        else if(temp[0]=='D'){faces+=12;}
        else if(temp[0]=='I'){faces+=20;}
    }
    cout<<faces;
    return 0;
}
#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 
#include <vector>

using namespace std;

int main(){
    string name;
    cin>>name;
    int  len = name.length();
    int nos=1;
    vector<char> characters;
    
    // making vector consisting all characters
    for(int i=0; i<len; i++){
        characters.push_back(name[i]);
    }
    // sorting
    sort(characters.begin(), characters.end());

    // counting distinct
    for(int i=1;i<len;i++){
        if(characters[i]!=characters[i-1])
            nos++;
    }

    // cout<<nos<<" "<<len;
    // // printing output
    if(nos%2==1)
        cout<<"IGNORE HIM!";
    else
        cout<<"CHAT WITH HER!";
    
    
    return 0;
}
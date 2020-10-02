#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 
#include <cstring>
#include <cctype>

using namespace std;

int main(){
    int low=0, up=0;
    // reading inputs
    string word;
    cin>>word;

    // counting the uppercase and lowercase letters
    for(int i=0; i<word.length();i++){
        if(islower(word[i]))
            low++;
        else if(isupper(word[i]))
            up++;
    }

    if(up>low)
    {
        transform(word.begin(), word.end(), word.begin(), ::toupper);
    }
    else
    {
        transform(word.begin(), word.end(),word.begin(), ::tolower);
    }
    
    cout<<word;

    return 0;
}
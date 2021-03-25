#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 

using namespace std;

int main(){
    // reading the inputs
    string s,t;
    string verdict;
    cin>>s>>t;
    int length = s.length();
    char arr[length];

    // making an array of words in s
    for(int i=0; i<length; i++){
        arr[i] = s[i];
    }

    // check if the word is completely reversed 
    for(int i=0; i<length; i++){
        if(t[i]==s[length-i-1]){
            verdict = "YES";
            continue;
        }
        else{
            verdict = "NO";
            break;
        }
    }

    cout<<verdict;


    return 0;
}
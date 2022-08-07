#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>=26){
        string input;
        set<char> alphabets;//in string
        cin>>input;
        transform(input.begin(),input.end(),input.begin(), ::tolower);
        for(int i=0;i<n;i++){
            if(input[i]>='a'&&input[i]<='z')
                alphabets.insert(input[i]);
        }
        if(alphabets.size()==26)
            cout<<"YES";
        else
            cout<<"NO";
        
    }
    else
        cout<<"NO";
    return 0;
}
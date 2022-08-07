#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 
#include<sstream>

using namespace std;

int main(){
    string input;
    set<string> letters;
    string cartoon;
    string waste;//for reading the bracket
    // reading the first one 
    cin>>input;
    if(input[2]=='}')
        cout<<1;
    else if(input[1]=='}')
        cout<<0;
    else
        {cartoon=input[1];
        letters.insert(cartoon);

        do{
            cin>>input;
            cartoon=input[0];
            waste = input[1];
            letters.insert(cartoon);
            // cout<<"working";
        }while(waste != "}");

        // for(auto x:letters)
        //     cout<<x;
        cout<<letters.size();}
    
    return 0;
}
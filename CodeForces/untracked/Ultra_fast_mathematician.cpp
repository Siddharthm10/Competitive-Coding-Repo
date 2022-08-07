#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 

using namespace std;

int main(){
    string number1,number2;
    string answer;
    cin>> number1>>number2;
    for(int i=0;i<number1.length();i++){
        if(number1[i]!=number2[i])
            answer.push_back('1');
        else
        {
            answer.push_back('0');
        }
        
    }

    cout<<answer;
    return 0;
}
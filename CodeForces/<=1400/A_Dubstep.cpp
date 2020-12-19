//"It's not a bug, It's a feature
// 900,strings
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define pi 3.1415926535
#define fu(i,n,j) for(int j=i; j<n; j++)
#define fd(i,n,j) for(int j=i; j>=0; j--)

using namespace std;

void answer(string s){
    bool flagNew = true;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            i+=2;
            if(!flagNew){
                cout<<" ";
                flagNew=true;
            }
            continue;
        }else{
            flagNew = false;
            cout<<s[i];
        }
    }
}

int main()
{
    string s;
    cin>>s;
    //write code here
    answer(s);
    return 0;
}
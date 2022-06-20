//"It's not a bug, It's a feature
// 1000, greedy
// 10mins
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define pi 3.1415926535
#define fu(i,n,j) for(int j=i; j<n; j++)
#define fd(i,n,j) for(int j=i; j>=0; j--)

using namespace std;

bool success(string s){
    bool answer=false;
    string msg = "hello";
    int pos=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='h'||s[i]=='e'||s[i]=='l'||s[i]=='o'){
            if(s[i]==msg[pos]){pos++;}
            if(pos==msg.length()){answer=true; break;}
        }
    }
    return answer;
}

int main()
{
    // TAKING INPUTS
    string s;
    cin>>s;

    //write code here
    bool answer = success(s);
    if(answer){cout<<"YES";}
    else{cout<<"NO";}

    return 0;
}

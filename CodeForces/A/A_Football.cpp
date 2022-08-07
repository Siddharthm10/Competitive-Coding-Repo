//"It's not a bug, It's a feature
// 900, strings
// 10 minutes
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define pi 3.1415926535
#define fu(i,n,j) for(int j=i; j<n; j++)
#define fd(i,n,j) for(int j=i; j>=0; j--)

using namespace std;

bool isDangerous(string s){
    bool answer=false;
    int counter=1;
    int i;
    for(i=1; i<s.length(); i++){
        if(s[i] == s[i-1]){
            ++counter;
            // cout<<counter;
        }
        else{
            counter=1;
        }
        if(counter==7){answer=true; break;}
    }
    // cout<<s.length()<<" "<<i<<endl;
    return answer;
}


int main()
{
    string s;
    cin>>s;
    bool answer = isDangerous(s);
    //write code here
    if(answer){cout<<"YES";}
    else{cout<<"NO";}
    return 0;
}
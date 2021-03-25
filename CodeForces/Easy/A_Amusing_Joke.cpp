//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>

#define for(i,n,k) for(int i=0; i<n; i=i+k)
using namespace std;

int main()
{
    string name1, name2;
    string test;
    cin>>name1;
    cin>>name2;
    cin>>test;
    int l1 = name1.length();
    int l2 = name2.length();
    int t1 = test.length();
    vector<char> concat;
    vector<char> verify;
    bool verdict=true;

    //write code here
    // Ensure that there are no extra letters and no missing letters
    
    for(i,l1,1) concat.push_back(name1[i]);
    for(i,l2,1) concat.push_back(name2[i]);
    sort(concat.begin(),concat.end());
    // for(i,t1,1) verify.push_back(test[i]);
    // sort(verify.begin(), verify.end());
    sort(test.begin(),test.end());

    if(l1+l2==t1){
        for(i,t1,1){
            if(concat[i]!=test[i]){
                verdict=false;
                break;
            }
        }
    }
    else
    {
        verdict = false;
    }
    
    if(verdict) cout<<"YES";
    else cout<<"NO";


    return 0;
}
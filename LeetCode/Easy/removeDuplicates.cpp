//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define pi 3.1415926535
#define fu(i,n) for(int i=0; i<n; i++)
#define fd(i,n) for(int i=n; i>=0; i--)

using namespace std;
// test case : abcdefghijklmnopqrstuvwxyzzyxwvutsrqponmlkjihgfedcba
// output: ""
// test case : aababaab
bool check(string s)
{
    bool foundDups = false;
    for(int i=1; i<s.length();i++)
    {
        if(s[i]==s[i-1])
        {
            foundDups=true;
        }
    }
    return foundDups;
}

string removeDuplicates(string s)
{
    stack<char> st;
    string updated;

    while(check(s))
    {
        fu(i,s.length())
        {
            if(!st.empty() && s[i]==st.top())
            {
                updated.pop_back();
                st.pop();
            }
            else
            {
                updated+=s[i];
                st.push(s[i]);
            }
            cout<<updated<<endl;
        }
        s = updated;
    }
    return s;
}

int main()
{
    string s;
    cin>>s;
    
    cout<<removeDuplicates(s);

    return 0;
}
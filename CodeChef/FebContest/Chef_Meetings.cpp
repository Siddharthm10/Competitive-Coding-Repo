//ITS ABOUT STRINGS 
// SPLIT STRING -> CONVERT TO 24HRS format -> IF P between L,R -> cout<<1, else cout<<0;
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define pi 3.1415926535
#define fu(i,n) for(int i=0; i<n; i++)
#define fd(i,n) for(int i=n; i>=0; i--)

using namespace std;

int changeTimeFormat(string s){
    string status = s.substr(6);
    // cout<<status;
    // cout<<s.substr(0,2);
    // cout<<s.substr(3,5);
    int hours = stoi(s.substr(0,2));
    int minutes = stoi(s.substr(3,5));
    int time = 0;
    // cout<<s;
    // cout<<status<<endl;
    if(hours==12 && status=="AM"){
        time = minutes;
        return time;
    }
    if((status=="AM")||(hours==12 && status=="PM")){
        time = 100*hours + minutes;
        return time;
    }
    else{
        time = 100*(hours+12) + minutes;
        return time;
    }
    // return 0;
}

void readLR(string s, vector<int> &L, vector<int> &R){
    L.push_back(changeTimeFormat(s.substr(0,8)));
    R.push_back(changeTimeFormat(s.substr(9)));
}


int main()
{
    int T;
    cin>>T;
    string temp;
    //write code here
    getline(cin, temp); // reads blank
    for(int i=0; i<T; i++){
        // cin>>temp;
        int P;
        getline(cin, temp); // reads P
        P = changeTimeFormat(temp);
        int N;
        cin>>N;
        vector<int> L, R;
        getline(cin,temp); //reads blank

        for(int j=0; j<N; j++){
            getline(cin,temp);
            readLR(temp,L,R);
            if(P>=L[j] && P<=R[j]){
                cout<<1;
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;
    }
    return 0;
}
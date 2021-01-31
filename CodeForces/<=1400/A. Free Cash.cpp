//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define pi 3.1415926535
#define fu(i,n) for(int i=0; i<n; i++)
#define fd(i,n) for(int i=n; i>=0; i--)

using namespace std;

int numOfCounter(int &n, vector<int> &hours, vector<int> &minutes){
    int answer=1;
    vector<int> ConsEnteries;
    bool saved = false;
    ConsEnteries.reserve(100000);
    for(int i=1; i<n; i++){
        if(hours[i]==hours[i-1] && minutes[i]==minutes[i-1]){
            answer++;
            saved=false;
        }
        else{
            ConsEnteries.push_back(answer);
            answer=1;
            saved = true;
        }
    }
    if(!saved){
        ConsEnteries.push_back(answer);
    }

    return *max_element(ConsEnteries.begin(), ConsEnteries.end());
}

int main()
{
    int n;
    cin>>n;
    //write code here
    int temp;
    vector<int> hours, minutes;
    hours.reserve(100000);
    minutes.reserve(100000);
    for(int i=0; i<n; i++){
        cin>>temp;
        hours.push_back(temp);
        cin>>temp;
        minutes.push_back(temp);
    }

    cout<<numOfCounter(n, hours, minutes);

    return 0;
}
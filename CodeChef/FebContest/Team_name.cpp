//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define pi 3.1415926535
#define fu(i,n) for(int i=0; i<n; i++)
#define fd(i,n) for(int i=n; i>=0; i--)
#define ll long long int

using namespace std;
//combinatronics approach -> choose from substrings and then from first letters
// find all such combinations and remove those with funny names in them
void print(vector<string> a){
    fu(i, a.size()){
        cout<< a[i] <<endl;
    }
}

//iterative approach
//passed Subtask 1
// TLE subtask 2
int numOfTeamNames(int N, vector<string> st){
    string a, b;
    int counter = 0;
    string tempA, tempB;
    // vector<string> allWords;
    //sorting for binary search
    sort(st.begin(), st.end());
    fu(i,N){
        a = st[i];
        for(int j=i+1; j<N; j++){
            b = st[j];
            if(a.substr(0,1)==b.substr(0,1) || a.substr(1)==b.substr(1)){continue;}

            tempA = b.substr(0,1) + a.substr(1);
            tempB = a.substr(0,1) + b.substr(1);
            //checking if tempA and tempB are not funny!
            if((!binary_search(st.begin(), st.end(), tempA)&&(!binary_search(st.begin(), st.end(), tempB)))){
                counter+=2;
                // cout<<"a: "<<tempA<<" b: "<<tempB<<endl;
            }
        }
    }
    // counter = check(allWords, st);

    return counter;
}



// Answer should be in O(N) complexity
int main()
{
    int T;
    cin>>T;

    int N;
    fu(i,T){
        cin>>N;
        vector<string> st(N);
        fu(j,N){
            cin>>st[j];
        }
        cout<< numOfTeamNames(N,st)<<endl;
    }

    return 0;
}
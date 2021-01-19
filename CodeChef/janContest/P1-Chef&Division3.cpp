//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define pi 3.1415926535
#define fu(i,n,j) for(int j=i; j<n; j++)
#define fd(i,n,j) for(int j=i; j>=0; j--)

using namespace std;

/* 
N-> no. of setters
Ai-> no. of problems ith setter made
K-> no. of problems in the contest
D-> no. of days
Find max no. of Div-3 contests that can be hosted in D days?

input format:
l1: T test cases
l2: N, K and D
l3: list A

output format:
output for each format on a new line
*/

int maxNoOfContests(int probsPerContest, int totalDays, int sum){
    if(sum<probsPerContest){return 0;}
    else{
        return min(int(sum/probsPerContest), totalDays);
    }
}


int main()
{
    int T;
    cin>>T;
    vector<int> A;
    int i=0, j=0;
    for(i=0; i<T; i++){
        int temp;
        int sum=0;
        int N, K, D;
        cin>>N>>K>>D;
        for (j=0; j<N; j++){
            cin>>temp;
            sum+=temp;
            A.push_back(temp);
        }
        cout<<maxNoOfContests(K, D, sum);
        if(i!=T-1){cout<<endl;}
    }
    return 0;
}
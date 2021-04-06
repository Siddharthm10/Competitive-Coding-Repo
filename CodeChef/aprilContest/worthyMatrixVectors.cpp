//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#include <list>
#define pi 3.1415926535
#define fu(i,n) for(int i=0; i<n; i++)
#define fd(i,n) for(int i=n; i>=0; i--)
#define ll long long int

using namespace std;

vector<vector<int>> preProcessing(vector<vector<int>> matrix, int N, int M){
    for(int i=0; i<=N; i++){
        int pre = 0;
        for(int j=0; j<=M; j++){
            matrix[i][j]+=pre;
            pre = matrix[i][j];
        }
    }
    for(int j=0; j<=M; j++){
        int pre = 0;
        for(int i=0; i<=N; i++){
            matrix[i][j]+=pre;
            pre = matrix[i][j];
        }
    }
    return matrix;
}

int countWorthyMatrix(vector<vector<int>>matrix, int N, int M, int K){
    int r=1;
    int counter = 0;
    int i,j;
    matrix = preProcessing(matrix, N, M);
    while(r<=N&&r<=M){
        for(i=r; i<=N; i++){
            for(j=r; j<=M; j++){
                if((matrix[i][j]+matrix[i-r][j-r]-matrix[i-r][j]-matrix[i][j-r])/(r*r)>=K){
                    counter++; 
                }
            }
        }
        r++;
    }
    return counter;
}



int main()
{
    int T;
    cin>>T;
    int N, M, K;
    fu(i,T){
        cin>>N>>M>>K;
        vector<vector<int>> matrix(N+1, vector<int>(M+1));
        fu(i, N+1){
            fu(j, M+1){
                if(i==0||j==0){
                    matrix[i][j] = 0;
                }
                else
                    cin>>matrix[i][j];
            }
        }
        cout<<countWorthyMatrix(matrix, N, M, K)<<endl;
    }
    return 0;
}
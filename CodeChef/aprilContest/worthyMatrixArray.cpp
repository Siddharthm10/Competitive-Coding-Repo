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

int main()
{
    ll t;
    cin>>t;
    while(t--!=0){
        ll n, m, k;
        cin>>n>>m>>k;
        double matrix[n+1][m+1];
        fu(i,n+1){
            fu(j, m+1){
                if(i==0||j==0){
                    matrix[i][j]=0;
                }
                else{
                    cin>>matrix[i][j];
                }
            }
        }
        fu(i, n+1){
            double pre=0;
            fu(j, m+1){
                matrix[i][j]+=pre;
                pre = matrix[i][j];
            }
        }
        fu(j,m+1){
            double pre=0;
            fu(i, n+1){
                matrix[i][j]+=pre;
                pre = matrix[i][j];
            }
        }
        ll z = (n>m)?m:n;
        ll ans = 0;
        for(ll len=1; len<=z; len++){
            for(ll i=len; i<=n; i++){
                for(ll j=len; j<=m; j++){
                    if((matrix[i][j] + matrix[i-len][j-len] - matrix[i-len][j] - matrix[i][j-len])/(len*len)>=k){
                        ans++;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
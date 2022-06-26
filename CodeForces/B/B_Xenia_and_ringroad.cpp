#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    ll n ,m,x,t=0;
    cin >> n >> m;
    vector<int>v(m);

    for(int i=0;i<m;i++)
    	cin >> v[i];

    t = v[0]-1;
    for(int i=1;i<m;i++){
        if(v[i]<v[i-1]){
            t+=n+(v[i]-v[i-1]);
        }else 
        	t+=(v[i]-v[i-1]);
    }
    cout << t << endl;
    return 0;
}
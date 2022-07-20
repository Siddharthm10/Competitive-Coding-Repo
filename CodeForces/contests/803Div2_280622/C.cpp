
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> arr(n);
        map<ll,ll> m;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            m[arr[i]]++;
        }
        ll z=0,sum=0;
        vector<ll> neg,pos;
        for(int i=0; i<n; i++){
            sum+=arr[i];
            if(arr[i]>0){
                pos.push_back(arr[i]);
            }
            else if(arr[i]<0){
                neg.push_back(abs(arr[i]));
            }
            if(arr[i]==0){
                z++;
            }
        }
        if(n==3){
            if(m[sum]!=0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            continue;
        }
        if(z==0){
            if(n==4){
                ll a=arr[0]+arr[1]+arr[2];
                ll b=arr[0]+arr[1]+arr[3];
                ll c=arr[1]+arr[2]+arr[3];
                ll d=arr[0]+arr[2]+arr[3];
                if(m[a]>0 and m[b]>0 and m[c]>0 and m[d]>0){
                    cout<<"YES"<<endl;
                    continue;
                }
            }
            cout<<"NO"<<endl;
        }
        else if(z!=0){
            if(z==n){
                cout<<"YES"<<endl;
                continue;
            }
            if(pos.size()+neg.size()==1){
                cout<<"YES"<<endl;
                continue;
            }
            else if(pos.size()==1 and neg.size()==1){
                if(pos==neg){
                    cout<<"YES"<<endl;
                        continue;
                }
            }
            cout<<"NO"<<endl;
        }
    }
}

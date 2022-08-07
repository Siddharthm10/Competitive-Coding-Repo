#include <bits/stdc++.h>
using namespace std;
 
int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // freopen("input.txt","r",stdin); 
    // freopen("output.txt","w",stdout);
    
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int cnt0 = 0, cnt1 = 0, cnt11 = 0;
            for(int k=i;k<=j;k++){
                if(arr[k] == 0) cnt0++;
                else cnt1++;
            }
            for(int kk=0;kk<i;kk++){
                if(arr[kk] == 1) cnt11++;
            }
            for(int kk=j+1;kk<n;kk++){
                if(arr[kk] == 1) cnt11++;
            }
            ans = max(ans, cnt11+cnt0);
        }
    }
    
    cout<<ans<<endl;
	return 0;
}
    #include <stdio.h>
    #include <iostream>
    #include <vector>
    #include <math.h>
    #include <bits/stdc++.h>
    #define ll long long int

    using namespace std;
    int main(){
        ios_base::sync_with_stdio(false); cin.tie(0);
        ll t;
        cin>>t;
        ll a, b;
        while(t--)
        {
            cin>>a>>b;
            cout<<((b&(b-1ll)) ? "No": "Yes");
            cout<<"\n";
        }
        return 0;
    }   

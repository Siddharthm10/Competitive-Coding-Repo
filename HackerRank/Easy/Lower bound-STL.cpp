#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n=0;
    int temp=0;
    int q=0;
    vector<int> v;
    cin>>n;
    vector<int>::iterator it;
    vector<int>::iterator low; 
    for(int i=0; i<n; i++){
        cin>>temp;
        v.push_back(temp);
    }

    cin>>q;
    for(int i=0; i<q; i++){
        cin>>temp;
        // it = find(v.begin(),v.end(),temp);
        low = lower_bound(v.begin(),v.end(),temp);
        if(v[low -v.begin() ] != temp){
            cout<< "No"<<" ";
            cout<<(low -v.begin() +1)<<endl;
        }
        else{
            cout<<"Yes"<< " ";
            cout<<(low -v.begin()+1 )<<endl;
        }    
    }

    return 0;
}

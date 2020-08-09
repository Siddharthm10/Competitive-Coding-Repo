#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int> s;
    int q = 0;
    int type = 0;
    int val = 0;
    cin>>q;
    for(int i=0; i<q; i++){
        cin >> type;
        cin >> val;
        if(type==1){
            s.insert(val);
        }
        if(type==2){
            s.erase(val);
        }
        if(type==3){
            set<int>::iterator itr=s.find(val);
            if (itr==s.end())
                cout<<"No"<<endl;
            else 
                cout<<"Yes"<<endl;
        }
    }
    return 0;
}




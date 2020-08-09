#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string,int> m ;
    int q=0;
    int type=0;
    int val=0;
    string name =" ";
    cin>>q;
    for(int i=0; i<q;i++){
        cin>>type;
        if(type==1){
            cin>>name>>val;
            m[name]+=val;
        }
        if(type==2){
            cin>>name;
            m[name]=0;
        }
        if(type==3){
            cin>>name;
            cout<<m[name]<<endl;
        }

    }
    return 0;
}




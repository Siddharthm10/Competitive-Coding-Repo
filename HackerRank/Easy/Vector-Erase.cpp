#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n=0;
    int temp =0;
    int a=0,b=0;
    cin>>n;
    vector<int> vec;
    for(int i=0; i<n;i++){
        cin>>temp;
        vec.push_back(temp);
    }
    cin>>temp;
    vec.erase(vec.begin()+temp-1);
    cin>>a>>b;
    vec.erase(vec.begin()+a-1,vec.begin()+b-1);
    cout<<vec.size()<<endl;
    for(size_t i=0; i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}

#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int n;
    int x=0;
    string operation;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>operation;
        if(operation[0]=='+' || operation[2]=='+'){
            x+=1;
        }
        else if(operation[0]=='-' || operation[2]=='-'){
            x-=1;
        }
    }
    cout<<x;
    return 0;
}
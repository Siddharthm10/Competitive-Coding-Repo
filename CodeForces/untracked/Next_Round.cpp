#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int k,n;
    cin>>n>>k;
    int cut_off;
    int scores[n];
    int advanced=0;
    for(int i=0; i<n; i++){
        cin>>scores[i];
    }
    // cout<<(sizeof(scores)/sizeof(scores[0]));
    cut_off= scores[k-1];
    for(int i=0;i<n;i++){
        if(scores[i]<cut_off || scores[i]<=0){
            break;
        }
        else{advanced++;}
    }
    cout << advanced;
    return 0;
}
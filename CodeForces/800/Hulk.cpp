#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 

using namespace std;

// declaring prototypes
void love(int n);
void hate(int n);


void love(int n){
    if(n>1){
        cout<<"I love that ";
        n--;
        hate(n);
    }
    else if(n==1){
        cout<<"I love ";
        n--;
    }
    
}

void hate(int n){
    
    if(n>1){
        cout<<"I hate that ";
        n--;
        love(n);

    }
    else if(n==1){
        cout<<"I hate ";
        n--;
    }
}


int main(){
    int n;
    cin>>n;

    hate(n);

    cout<<"it";
    return 0;
}
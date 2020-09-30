#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 
#include <cstdlib>

using namespace std;

int main(){
    int index_m=1, index_n=1;
    int temp[5][5];
    int min_steps = 0;
    for(int j=0; j<5; j++){
        for(int i=0; i<5; i++){
            cin>>temp[i][j];
            if(temp[i][j]==1){
                index_m=i+1;
                index_n=j+1;
            }
        }
    }

    min_steps = abs(index_m-3) + abs(index_n-3);
    cout<<min_steps;
    return 0;
}
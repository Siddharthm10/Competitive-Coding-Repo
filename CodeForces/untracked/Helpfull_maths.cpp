#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 
#include <sstream> 

using namespace std;

int main(){
    string input;
    cin>>input;
    int len = (input.length()+1)/2;
    int array[len];
    char temp = '+';
    stringstream ss(input);
    ss>>array[0];
    
    // creating the array
    for(int i=1; i<len;i++){
        ss>>temp;
        ss>>array[i];
    }

    // sorting the array
    sort(array, array+len);

    //  Displaying array
    for(int j=0; j<len-1;j++){
        cout<<array[j]<<temp;
    }
    cout<<array[len-1];

    return 0;
}
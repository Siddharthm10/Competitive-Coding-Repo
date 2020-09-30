#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int m,n;//m -> rows, n-> columns
    cin>>m>>n;
    int answer;
    int verticalLeft, horizontalLeft;

    /* _ _ _
       _ _ _ 
       _ _ _  3x3*/
    
    // for(int i=0; i<m; i++)
    horizontalLeft = n%2;
    if(horizontalLeft!=0){
        verticalLeft = m%2;
        answer = (m*n - horizontalLeft*verticalLeft)/2;
    }
    else
        answer = m*n/2;

    cout<<answer;
    return 0;

}
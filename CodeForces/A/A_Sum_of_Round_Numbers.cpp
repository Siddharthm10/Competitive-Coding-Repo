//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#include <math.h>
#define fo(i,n,j) for(int i=0; i<n; i=i+j)
using namespace std;

int calculate_digits(int number){
    int count=1;
    while(number/10>0){
        number=number/10;
        count++;
    }

    return count;
}
int non_zero_digits(int n,int count){
    int temp;
    temp=n;//5009
    int counter=0;
    fo(i,count,1){//4
        if(temp%10>0){//6,
            counter++;//1
        }
        temp=temp/10;//978

    }
    return counter;
}




int main()
{
    int t;
    cin>>t;
    int n[t];
    int count[t];
    int temp;
    
    
    
    fo(i,t,1){
        cin>>n[i];
        count[i] = calculate_digits(n[i]);
        int temp=0;
        int output[t][count[i]];

        cout<<non_zero_digits(n[i],count[i])<<endl;
        for(int j=count[i];j>=0;j--){
            temp = n[i]%(int(pow(10,j)));
            output[i][j] = n[i]-temp;
            n[i] = temp;
            if(output[i][j]>0){
                cout<<output[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    
    
    
    
    return 0;
}

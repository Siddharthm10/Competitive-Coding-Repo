//"It's not a bug, It's a feature
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define pi 3.1415926535
#define fu(i,n,j) for(int j=i; j<n; j++)
#define fd(i,n,j) for(int j=i; j>=0; j--)

using namespace std;

/*
a b c d e f g h i j k l m n o p
16 : 1st 2nd 3rd 4th
1st : 0 -> first 8 digits
      1 -> last 8 digits
2nd : 0 -> first 4 of the prev digits
      1 -> last 4 of the prev digits
3rd : 0 -> first 2 of the prev digits
      1 -> last 2 of the prev digits
      
4th : 0 -> first of the prev digits
      1 -> last of the prev digits


input format:
l1: T
l2: N
l3: encoded string

output format:
output the decoded string too the new line
*/


void decodedmsg(vector<string> msg){
    string letters = "abcdefghijklmnop";
    for(int i=0; i<msg.size(); i++){
        int counter =0;
        if(msg[i][0]=='1'){
            counter+=8;
        }
        if(msg[i][1]=='1'){
            counter+=4;
        }
        if(msg[i][2] == '1'){
            counter+=2;
        }
        if(msg[i][3] == '1'){
            counter+=1;
        }
        cout<<letters[counter];
    }
}
void printVec(vector<string> msg){
    for(int i=0; i<msg.size(); i++){
        cout<<msg[i]<<endl;
    }
}

int main()
{
    int T;
    cin>>T;
    for(int i=0; i<T; i++){
        int N;
        cin>>N;
        vector<string> msg(N/4);
        string temp;
        cin>>temp;
        // msg.push_back(temp);
        for(int j=0; j<N/4; j++){
            msg[j] = temp.substr(0,4);
            temp = temp.substr(4, temp.length());
        }
        decodedmsg(msg);
        if (i!=T-1){cout<<endl;}
        // printVec(msg);
    }



    return 0;
}
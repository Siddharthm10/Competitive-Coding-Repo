//"It's not a bug, It's a feature
// string 1000
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define pi 3.1415926535
#define fu(i,n,j) for(int j=i; j<n; j++)
#define fd(i,n,j) for(int j=i; j>=0; j--)

using namespace std;

void insertDemo(string str, int index){
    str.insert(str.begin()+index,'.');


}

string processing(string s){
    string answer;
    //  replaces uppercase with lowercase letters
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    answer = s;
    
    for(int i=0; i<answer.length(); i++){
        if(answer[i]!='a'&& answer[i]!='y'&& answer[i]!='e'&&answer[i]!='i'&&answer[i]!='o'&&answer[i]!='u'){
            answer.insert(answer.begin() + i++, '.');
        }
        else 
            answer.erase(answer.begin()+i--);
    }


    return answer;
}

int main()
{
    string s;
    cin>>s;
    // deletes vowels
    // inserts . befor each consonant
    //write code here
    cout<<processing(s);
    return 0;
}
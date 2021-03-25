#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h> 

using namespace std;

// check if the digits are distinct
bool check_distinct(string s){
    bool verdict=true;
    for(int i=0;i<s.length();i++ ){
        for(int j=i+1; j<s.length(); j++){
            if(s[i]==s[j]){
                verdict=false;
                break;
            }
        }
        if(verdict==false){
            break;
        }
    }
    return verdict;
}

int main(){
    string year;
    cin>>year;
    bool verdict=false;
    int answer;
    string answer_s = year;

    while(verdict==false){
        answer = stoi(answer_s);
        answer++;
        answer_s = to_string(answer);
        verdict = check_distinct(answer_s);
        // cout<<answer<<endl;
        // cout<<answer_s<<endl;
        // cout<<endl;
    }
    

    cout<<answer;
    return 0;
}
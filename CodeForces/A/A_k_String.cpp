//"It's not a bug, It's a feature
// string, 1000
// 32 mins
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#define pi 3.1415926535
#define fu(i,n,j) for(int j=i; j<n; j++)
#define fd(i,n,j) for(int j=i; j>=0; j--)

using namespace std;
// couldnt pass the test 
//  read the solution in the main function(the problem had different answer(according to me even this answer is correct but there is a simpler solution. :()))
string rearrangedString(int k, string s){
    
    sort(s.begin(), s.end());
    int i=1;
    string base;
    vector<char> distinctCharacters;
    distinctCharacters.push_back(s[0]);
    vector<int> counter;
    for(i=1; i<s.length(); i++){
        if(s[i]!= s[i-1]){
            distinctCharacters.push_back(s[i]);
        }
    }
    for(auto x:distinctCharacters){
        int temp = count(s.begin(), s.end(), x);
        counter.push_back(temp);
        base+=x;
    }
    for(int j=1; j<counter.size(); j++){
        if(counter[j]%k!=0){return "-1"; }
    }

    string answer=base;
    for(int j=1; j<counter[0]; j++){
        // cout<<base<<endl;
        answer+=base;
    }
    return answer;
    
}

int main()
{
    int k,count=0;
	char ch;

    //  reading inputs
	cin>>k;
	string s;
	cin>>s;
    ////////////////////
    // length of the string
	int l=s.size();
	sort(s.begin(),s.end());
	for(int i=0;i<s.size();i++){ 
	    if(i%k==0){
	       ch=s[i]; 
	    }
	    if(s[i]==ch){
	        count++;
	    }
	}
	if(l==count && count%k==0){
	    for(int i=0;i<k;i++){
	        for(int l=0;l<s.size();l+=k){
	            cout<<s[l];
	        }
	    }
	}else{
	    cout<<"-1";
	}

	return 0;
    // string answer = rearrangedString(k, s);
    return 0;
}
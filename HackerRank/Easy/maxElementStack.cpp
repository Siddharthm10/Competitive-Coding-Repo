#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T=0;
    cin>>T;
    int q;
    int x;
    int maximum=INT32_MIN;

    stack<int> answer;
    stack<int> auxAnswer;
    
    for(int i=0; i<T; i++){
        cin>>q;
        if(q==1){
            cin>>x;
            if(auxAnswer.empty()){
                auxAnswer.push(x);
            }
            else if(x>=auxAnswer.top()){
                auxAnswer.push(x);
            }
            answer.push(x); //O(1)
        }
        else if(q==2){
            if(answer.top()==auxAnswer.top())
                auxAnswer.pop();
            answer.pop(); // O(1)
        }
        else{
             //O(1)
             cout<<auxAnswer.top()<<endl;
        }
    }
    return 0;
}


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
  public:
    string reverseWords(string S) 
    { 
        // code here 
        vector<string> words;
        string temp = S;
        int start = 0;
        string word="";
        while(temp!=""){
            int delimF = temp.find('.', start);
            // cout<<delimF<<" "<<temp;
            if(delimF==-1){
                words.push_back(temp);
                break;
            }
            word = temp.substr(start, delimF);
            words.push_back(word);
            temp = temp.substr(delimF+1, temp.length()-1);
            // cout<<word<<endl;
        }
        
        string answer="";
        for(int i=0; i<words.size(); i++){
            answer += words[words.size() - i-1];
            // cout<<words[i]<<endl;
            // cout<<words.size();
            if(i!=words.size()-1){
                answer = answer + ".";
            }
        }
        return answer;
        
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends

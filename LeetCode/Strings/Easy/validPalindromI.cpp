class Solution {
public:
    string reverseString(string validS){
        string answer="";
        for(int i=validS.length()-1; i>=0; i--){
            answer += validS[i];
        }
        cout<<answer;
        return answer;
    }
    bool isPalindrome(string s) {
        string validS="";
        for(int i=0; i<s.length(); i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9') || (s[i]>='A' && s[i]<='Z') )
                validS += s[i];
        }
        transform(validS.begin(), validS.end(), validS.begin(), ::tolower);
        cout<<validS<<endl;
        string revS = reverseString(validS);
        return revS == validS;
    }
};

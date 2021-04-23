class Solution {
public:
    int maxDepth(string s) {
        // stack<char> st;
        int maxCount=0;
        int counter=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){counter++;}
            else if(s[i]==')'){
                if(maxCount<counter) maxCount=counter;
                counter--;
            }
        }
        return maxCount;
    }
};

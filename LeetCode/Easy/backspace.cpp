class Solution {
public:
    
    string functionality(string s){
        stack <char> st;
        string updated;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='#')
            {
                if(updated.length()!=0)
                {
                    updated.pop_back();
                }
            }
            else
            {
                updated+= s[i];
            }
        }
        return updated;
    }
    
    bool backspaceCompare(string S, string T) {
        string s, t;
        
        s = functionality(S);
        t = functionality(T);
        return s==t;
    }
};
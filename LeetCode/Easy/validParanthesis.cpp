class Solution {
public:
    char match(char C){
        char match;
        if(C==')')
            return '(';
        
        else if(C==']')
            return '[';
        
        else
            return '{';
    }
    
    
    bool isValid(string S) 
    {
        stack<char> st;
        bool answer;
        for(int i=0; i<S.length(); i++)
        {
            if(S[i]=='(' || S[i]=='{' || S[i]=='[')
            {
                st.push(S[i]);
            }
            else if(!st.empty())
            {
                if(st.top()==match(S[i]))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
                
            }
            else{
                return false;
            }
        }
        if(st.empty()){answer = true;}
        else{answer=false;}
        return answer;
    }
};
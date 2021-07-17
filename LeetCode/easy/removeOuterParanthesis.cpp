class Solution {
public:
    string removeOuterParentheses(string S) {
        //stack init
        string answer="";
        stack<char> outer;
        stack<char> inner;

        // looping through the stack
        for(int i=0; i<S.length(); i++)
        {
            if(outer.empty())
            {
                // cout<<"x";
                outer.push(S[i]);
            }
            else
            {
                // cout<<"|";
                if(S[i]=='('){
                    answer+=S[i];
                    inner.push(S[i]);
                }
                else if(S[i]==')'&& inner.empty())
                {
                    outer.pop();
                }
                else{
                    answer+=S[i];
                    inner.pop();
                }
            }
        }

        return answer;
    }
};

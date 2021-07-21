/*
 * @lc app=leetcode id=301 lang=cpp
 *
 * [301] Remove Invalid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool ifValid(string str){
        stack<char> st;
        for(int i=0; i<str.length(); i++){
            if(str[i]=='(') st.push(str[i]);
            else if(str[i]==')'){
                if(st.size()>0) st.pop();
                else return false;
            }
        }
        return st.empty();
    }
    int getMinInvalid(string s){
        stack<char> st;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='(')
                st.push(s[i]);
            else if(s[i]==')'){
                if(!st.empty() && st.top()=='('){
                    st.pop();
                }
                else st.push(s[i]);
            }
        }
        return st.size();
    }
    void helper(string s, map<string, int> &m, vector<string> &ans, int minInv){
        if(m[s]>0)
            return;
        else
            m[s]++;
        
        if(minInv==0){
            if(ifValid(s))
                ans.push_back(s);
            return;
        }

        for(int i=0; i<s.size(); i++){
            string left = s.substr(0,i);
            string right = s.substr(i+1);
            helper(left+right, m, ans, minInv-1);
        }
        return;
    }
    vector<string> removeInvalidParentheses(string s) {
        vector<string> ans;
        string comb;
        map<string, int> m;
        helper(s, m, ans, getMinInvalid(s));
        return ans;
    }
};
// @lc code=end


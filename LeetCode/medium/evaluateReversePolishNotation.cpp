/*
 * @lc app=leetcode id=150 lang=cpp
 *
 * [150] Evaluate Reverse Polish Notation
 */

// @lc code=start
class Solution {
public:
    int operation(int a, int b, string op){
        if(op=="+"){
            return a+b;
        } else if(op == "-"){
            return a-b;
        } else if(op == "*"){
            return a*b;
        } else if(op == "/"){
            return a/b;
        }
        return 0;
    }
    bool isOperator(string op){
        if(op!="+" && op!="-" && op!="*" && op!="/"){
            return false;
        }
        return true;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i=0; i<tokens.size(); i++){
            if(not isOperator(tokens[i])){
                st.push(stoi(tokens[i]));
            }
            else{
                int op1 = st.top();
                st.pop();
                int op2 = st.top();
                st.pop();
                st.push(operation(op2, op1, tokens[i]));
            }
        }
        return st.top();
    }
};
// @lc code=end


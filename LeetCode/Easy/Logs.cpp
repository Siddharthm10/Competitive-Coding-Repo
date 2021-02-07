class Solution {
public:
    int minOperations(vector<string>& logs) {
        int answer = 0;
        // string temp;
        stack<string> st;
        for(int i=0; i<logs.size(); i++){
            if(logs[i] == "../"){
                if(answer>0){
                    st.pop();
                    answer--;
                }
                
            }
            else if(logs[i] == "./"){
                cout<<"pass";
            }
            else{
                st.push(logs[i]);
                answer++;
            }
        }
        return answer;
    }
};
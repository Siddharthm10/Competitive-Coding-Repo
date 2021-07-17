class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) 
    {
        stack<int> st;
        vector<string> output;
        
        for(int i=target.size()-1; i>=0; i--){
            st.push(target[i]);
        }
        
        int counter=1;
        while(!st.empty())
        {
            output.push_back("Push");
            
            if(counter!=st.top())
            {
                output.push_back("Pop");
            }
            else
                st.pop();
            counter++;
        }
        return output;
    }
};
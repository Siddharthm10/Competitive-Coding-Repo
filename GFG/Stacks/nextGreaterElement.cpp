class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        // vector<long long> ans(n);
        stack<long long> st;
        st.push(0);
        for(int i=1; i<n; i++){
            while(!st.empty()&&arr[i]>arr[st.top()]){
                arr[st.top()] = arr[i];
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            arr[st.top()] = -1;
            st.pop();
        }
        return arr;
    }
};

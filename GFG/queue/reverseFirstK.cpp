
//Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k)
{
    //add code here.
    stack<int> st;
    int tempK = k;
    while(tempK--){
        int temp = q.front();
        q.pop();
        st.push(temp);
    }
    queue<int> altQ;
    while(!st.empty()){
        int temp = st.top();
        st.pop();
        altQ.push(temp);
    }
    while(!q.size()==0){
        altQ.push(q.front());
        q.pop();
    }
    return altQ;
}

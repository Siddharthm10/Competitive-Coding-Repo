class MyQueue {
    stack<int> st;
    stack<int> st2;
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        st.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    
    int pop() {
        while(!st.empty()){
            st2.push(st.top());
            st.pop();
        }
        int val = st2.top();
        st2.pop();
        while(!st2.empty()){
            st.push(st2.top());
            st2.pop();
        }
        return val;
    }
    
    /** Get the front element. */
    int peek() {
        while(!st.empty()){
            st2.push(st.top());
            st.pop();
        }
        int val = st2.top();
        while(!st2.empty()){
            st.push(st2.top());
            st2.pop();
        }
        return val;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        if(st.empty()) return true;
        else return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

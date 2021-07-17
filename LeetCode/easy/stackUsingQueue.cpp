class MyStack {
    queue<int> q1;
public:
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q1.push(x);
        for(int i=0; i<q1.size()-1; i++){
            q1.push(q1.front());
            q1.pop();   
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int val = q1.front();
        q1.pop();
        return val;
    }
    
    /** Get the top element. */
    int top() {
        return q1.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        if(q1.empty()) return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

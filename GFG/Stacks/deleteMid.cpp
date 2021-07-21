class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        if(s.size()==ceil(sizeOfStack/2.0)){
            s.pop();
            return;
        }
        int val = s.top();
        s.pop();
        deleteMid(s, sizeOfStack);
        s.push(val);
    }
};

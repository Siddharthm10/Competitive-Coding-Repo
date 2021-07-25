/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

/*returns min element from stack*/
int _stack :: getMin()
{
   //Your code here
   if(s.empty()) return -1;
   return s.top();
}

/*returns poped element from stack*/
int _stack ::pop()
{
   //Your code here
   if(s.empty()) return -1;
   s.pop();
   int top = s.top();
   s.pop();
   if(!s.empty()) minEle = top;
   return top;
}

/*push element x into the stack*/
void _stack::push(int x)
{
   //Your code here
   if(s.empty()) minEle = x;
   if(x<minEle) minEle = x;
   s.push(x);
   s.push(minEle);
}

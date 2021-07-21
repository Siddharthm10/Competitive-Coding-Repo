void insert(stack<int> &s, int val){
    stack<int> temp;
    while(!s.empty()&&s.top()>val){
        temp.push(s.top());
        s.pop();
    }
    s.push(val);
    while(!temp.empty()){
        s.push(temp.top());
        temp.pop();
    }
}
void SortedStack :: sort()
{
      if(s.size()==1) return;
      
      int val = s.top();
      s.pop();
      sort();
      
      insert(s, val);
      
      return;
}

/*returns min element from stack*/
 int _stack :: getMin(){
    if(s.empty()) return -1;
    return s.top();
}
/*returns poped element from stack*/
int _stack ::pop(){
   if(s.empty()) return -1;
   s.pop();
   int op = s.top();
   s.pop();
   if(!s.empty()) minEle = s.top();
   return op;
}
/*push element x into the stack*/
void _stack::push(int x){
   if(s.empty()) minEle=x;
   if(x < minEle) minEle = x;
   s.push(x);
   s.push(minEle);
}

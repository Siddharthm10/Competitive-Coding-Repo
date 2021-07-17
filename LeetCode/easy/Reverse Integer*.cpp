// Question Statement:
// Given a 32-bit signed integer, reverse digits of an integer.
// My solution:

class Solution {
public:
    int reverse(int x) {
        
        if((x>=INT_MIN) && (x<=INT_MAX)){
            
            int length = 1;
            vector<int> digits {};
            if(x!=0){
                length = log10(abs(x))+1;
            }
            
            for(size_t i=0; i<length; i++){
//                 example = 123
//                           210
                digits.push_back((x%((long int)pow(10,i+1))-(x%(int)pow(10,i)))/(int)pow(10,i));
                
            }
//          Now we have a matrix of digits like for the given example we have {1,2,3}
            
            long long int answer=0;
            
            for(int i=length-1; i>=0; i--){
                
                answer+= digits[length-i-1]*(long long int)pow(10,i);    
                
            }
            if((answer>=INT_MIN) && (answer<=INT_MAX))
                return 0;
            else
                return answer;
        }
        else
            return 0;
    }
};




// Ideal Solution:
class Solution {
public:
    int reverse(int x) {
        int sign=1;
        if (x==INT_MIN) return 0;
        if (x<0) {
            sign=-1;
            x=x*-1;
        }
        int res=0;
        while (x) {
            if (res > (INT_MAX - x%10)/10) return 0;
            res=res*10 + x%10;
            x=x/10;
        }
        return res*sign;
    }
};

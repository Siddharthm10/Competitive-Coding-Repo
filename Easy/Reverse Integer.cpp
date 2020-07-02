// Question Statement:
// Given a 32-bit signed integer, reverse digits of an integer.

class Solution {
public:
    int reverse(int x) {
        
        if((x>=(-pow(2,31))) && (x<=pow(2,31)-1)){
            vector<int> digits {};
            int length = log10(x)+1;
            for(size_t i=0; i<length;i++){
//                 example = 123
//                           210
                digits.push_back(x%pow(10,i+1))
            }
        
        }
        else
            return 0;
    }
};

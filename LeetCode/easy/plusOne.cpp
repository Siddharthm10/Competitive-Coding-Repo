class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0;
        for(int i=digits.size()-1; i>=0; i--){
            if(digits[i]+1<=9) {
                digits[i] = digits[i]+1;
                carry=0;
                break;
            }
            else {
                carry=1;
                digits[i] = 0;
            }
        }
        if(carry){
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};

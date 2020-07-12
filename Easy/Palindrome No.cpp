class Solution {
public:
  bool isPalindrome(int x) {
    string g=to_string(x);
    string p=g;
    reverse(p.begin(),p.end());
    return p==g;
  }
};


//This Uses very less memory but is slow








int ReverseInteger(int x){
    long long reversedInt=0;
    while(x){
        reversedInt = reversedInt*10 + x%10;
        x = x/10;
    }
    return (reversedInt < INT_MIN || reversedInt > INT_MAX) ? 0 : reversedInt;
}



class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        else if(x==0)
            return true;
        else{
            int reversedInt = 0;
            reversedInt = ReverseInteger(x);
            if(!reversedInt)
                return false;
            else{
                return (reversedInt==x)? true:false;
            }
        }
    }
};


//This is faster than 60% of people.

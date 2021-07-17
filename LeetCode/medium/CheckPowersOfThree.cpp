class Solution {
public:
    bool check(int maxPower, int n){
        if(n==0) return true;
        if(maxPower<0) return false;

        int power = pow(3,maxPower);

        if(n>power){
            return check(maxPower-1, n-power);
        }else if(n<power){
            return check(maxPower-1, n);
        }else{
            return true;
        }
    }

    bool checkPowersOfThree(int n) {
        int maxPower = 0;
        if(n==1) return true;
        while(true){
            if(n==pow(3,maxPower)){
                break;
            }else if(n>pow(3, maxPower)){
                maxPower++;
            }
            else{
                maxPower--;
                break;
            }
        }
        bool answer = check(maxPower, n);
        return answer;
    }
};
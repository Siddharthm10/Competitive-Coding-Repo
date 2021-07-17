class Solution {
public:
    int balancedStringSplit(string s) {
        int counter=0;
        int lcount=0, rcount=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='L') lcount++;
            else rcount++;
            if(lcount==rcount){
                counter++;
                lcount=0;
                rcount=0;
            }
        }
        return counter;
    }
};

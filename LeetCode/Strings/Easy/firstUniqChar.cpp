class Solution {
public:
    int firstUniqChar(string s) {
        // ascii values lie between (97,122)
        // ascii % 97 = (0,25)
        vector<int> ascii(26, 0);
        for(int i=0; i<s.length(); i++){
            ascii[(int)s[i]%97]++;
        }
        for(int i=0; i<s.length(); i++){
            if(ascii[(int)s[i]%97]==1) return i;
        }
        return -1;
    }
};

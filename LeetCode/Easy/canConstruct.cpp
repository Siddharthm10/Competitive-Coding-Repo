class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> ascii(26,0);
        for(int i=0; i<magazine.length(); i++){
            ascii[magazine[i]%97]++;
        }
        for(int i=0; i<ransomNote.length(); i++){
            ascii[ransomNote[i]%97]--;
        }
        for(int i=0; i<ascii.size(); i++){
            if(ascii[i]<0){
                return false;
            }
        }
        return true;
    }
};

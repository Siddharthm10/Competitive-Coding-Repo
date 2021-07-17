class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.length()<26) return false;
        vector<int> ascii(26,0);
        for(int i=0; i<sentence.length(); i++){
            ascii[sentence[i]%97]++;
        }
        for(int i=0; i<ascii.size(); i++){
            if(ascii[i]==0) return false;
        }
        return true;
    }
};

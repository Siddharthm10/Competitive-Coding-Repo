class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        if(accumulate(word1.begin(), word1.end(), string(""))==accumulate(word2.begin(), word2.end(), string(""))) return true;
        else return false;
    }
};

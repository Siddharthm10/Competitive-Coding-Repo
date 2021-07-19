class Solution{
public:

    void helper(string &S, vector<string> &apa, string poss, int counter){
        if(counter==S.length()-1){
            poss+=S[counter];
            apa.push_back(poss);
            return;
        }
        poss += S[counter];
        helper(S, apa, poss+" ", counter+1);
        helper(S, apa, poss, counter+1);
    }
    vector<string> permutation(string S){
        // Code Here
        vector<string> apa;
        string poss;
        int counter=0;
        helper(S, apa, poss, counter);
        return apa;
    }
};

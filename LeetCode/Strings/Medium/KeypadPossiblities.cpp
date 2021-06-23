class Solution {
    vector<string> keypad = {"", "",
                             "abc",
                             "def", 
                             "ghi", 
                             "jkl", 
                             "mno", 
                             "pqrs", 
                             "tuv",
                             "wxyz"};

public:
    int keypad_permutations(int num, vector<string> &output){
        if(num==0){
            output.push_back("");
            return 1;
        }

        int lastDigit = num%10;
        int otherPart = num/10;
        
        vector<string> smallOutput;
        int smallNum = keypad_permutations(otherPart, smallOutput);
        string opt = keypad[lastDigit];

        int k=0;
        for(int i=0; i<smallNum; i++){
            for(int j=0; j<opt.length(); j++){
                if(k<output.size()){
                    output[k] = smallOutput[i]+opt[j];
                }
                else{
                    output.push_back(smallOutput[i] + opt[j]);
                }
                k++;
            }
        }
        return k;
    }

    vector<string> letterCombinations(string digits) {
        if(digits=="") return {};
        int input = stoi(digits);
        vector<string> output;
        int size = keypad_permutations(input, output);
        return output;
    };
};
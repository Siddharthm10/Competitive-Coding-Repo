class Solution {
public:

    string sortSentence(string s) {
        //Tokenisation vector
        vector<pair<char, string>> tokens;

        //Temporary variables
        char num = '0';
        string temp="";
        for(int i=0; i<s.length(); i++){
        	// Checking if there is a number
        	if(s[i]>='1'&&s[i]<='9'){
        		num=s[i];
        		continue;
        	}
        	// Checking for space:
        	//If yes then pushing it to vector
        	if(s[i]==' '){
        		tokens.push_back(make_pair(num,temp));
        		temp = "";
        		continue;
        	}
        	temp+=s[i];
        }
        // Pushing the last word
        tokens.push_back(make_pair(num,temp));

        // Sorting according to the number given with them
        sort(tokens.begin(), tokens.end());
        // Storing answer in the same variable
        temp = "";
        for(int i=0; i<tokens.size(); i++){
        	temp+=tokens[i].second;
            if(i!=tokens.size()-1){
                temp+=" ";
            }
        }
        return temp;
    }
};
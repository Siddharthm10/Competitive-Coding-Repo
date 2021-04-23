class Solution {
public:
    string defangIPaddr(string address) {
        string answer="";
        for(int i=0; i<address.length(); i++){
            if(address[i]=='.'){
                answer+="[.]";
            }else{
                answer+=address[i];
            }
        }
        return answer;
    }
};

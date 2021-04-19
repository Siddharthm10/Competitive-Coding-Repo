//Most probably the worst solution. But I had to do it without changing it into a number. :P
class Solution {
public:
    void reverseStr(string& str){
        int n = str.length();

        // Swap character starting from two
        // corners
        for (int i = 0; i < n / 2; i++)
            swap(str[i], str[n - i - 1]);
    }
    string addBinary(string a, string b) {
        string answer = "";
        char carry='0';
        int last_i, last_j;
        for(int i=a.length()-1,j=b.length()-1;i>=0&&j>=0;i--,j--){
            if(a[i]=='0'||b[j]=='0'){
                if(carry=='0'){
                    if(a[i]=='0'&&b[j]=='0') answer+='0';
                    else answer+='1';
                }else{
                    if(a[i]=='0'&&b[j]=='0'){
                        answer+='1';
                        carry='0';
                    }else{
                        answer+='0';
                    }
                }
            }else{
                if(carry=='0'){
                    answer+='0'; 
                    carry='1';
                }else{
                    answer+='1';
                }
                carry='1';
            }
            last_i=i; 
            last_j=j;
        }
        cout<<answer;
        while(--last_i>=0){
            if(a[last_i]=='0'){
                if(carry=='0'){
                    answer+='0';
                }else{
                    answer+='1';
                    carry='0';
                }
            }else{
                if(carry=='0'){
                    answer+='1';
                }else{
                    answer+='0';
                }
            }
        }
        while(--last_j>=0){
            if(b[last_j]=='0'){
                if(carry=='0'){
                    answer+='0';
                }else{
                    answer+='1';
                    carry='0';
                }
            }else{
                if(carry=='0'){
                    answer+='1';
                }else{
                    answer+='0';
                }
            }
        }
        if(carry=='1') answer+='1';
        reverseStr(answer);
        return answer;
        
    }
};

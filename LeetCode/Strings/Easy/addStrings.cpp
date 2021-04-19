class Solution {
public:
    string addStrings(string num1, string num2) {
        // cout<<(int)'1' + (int)'2' - 2*(int)'0';
        int carry=0;
        int tempSum=0;
        string answer="";
        int i,j;
        for(i=num1.length()-1, j=num2.length()-1; i>=0&&j>=0; i--, j--){
            tempSum = num1[i]+num2[j] - 2*(int)'0' + carry;
            
            carry = tempSum/10;
            answer+=(tempSum%10 + '0');
            // cout<<answer<<endl;
        }
        i++;
        j++;
        while(i-->0){
            tempSum = num1[i] + carry - (int)'0';
            carry = tempSum/10;
            answer+=tempSum%10+'0';         
        }
        while(j-->0){
            tempSum = num2[j] + carry - (int)'0';
            carry = tempSum/10;
            answer+=tempSum%10+'0';         
        }
        if(carry>0){
            answer+=carry+'0';
        }
        
        return string(answer.rbegin(),answer.rend());
    }
};

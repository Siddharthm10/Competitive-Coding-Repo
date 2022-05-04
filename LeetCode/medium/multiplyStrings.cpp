/*
 * @lc app=leetcode id=43 lang=cpp
 *
 * [43] Multiply Strings
 */

// @lc code=start
class Solution {
public:
    string multiply(string first, string second) {
        if (first == "0" || second == "0") return "0";
        vector<int> res(first.length()+second.length(), 0);
        for(int i=first.length()-1; i>=0; i--){
            for(int j=second.length()-1; j>=0; j--){
                res[i+j+1] += (first[i]-'0')*(second[j]-'0');
                res[i+j] += res[i+j+1]/10;
                res[i+j+1] %= 10;
            }
        }   
        int idx = 0;
        string ans;
        while(res[idx]==0) idx++;
        while(idx<res.size()) ans += to_string(res[idx++]);
        return ans;
    }
};
// @lc code=end
string multiply(string first, string second) {
        // i-> pointer for traversing first
        // j-> pointer for traversing second
        int i=0, j=0;
        reverse(first.begin(), first.end());
        reverse(second.begin(), second.end());
        //store the result
        string res(first.length()+second.length(), '0');
        int carry = 0;
        for(i=0; i<first.length(); i++){
            for(j=0; j<second.length(); j++){
                int product = (first[i]-'0') * (second[j]-'0');
                int temp = res[i+j]-'0';
                res[i+j] = (product + (res[i+j]-'0') + carry)%10 + '0';
                carry = (product + temp + carry)/10;
            }
            while(carry){
                int temp = res[i+j]-'0';
                res[i+j] = (res[i+j]-'0'+carry)%10 + '0';
                carry = (temp+carry)/10;
                j++;
            }
        }
        reverse(res.begin(), res.end());
        string ans;
        int idx = 0;
        while(res[idx]=='0') idx++;
        while(idx<res.size()) ans+=res[idx++];
        return idx==res.length()?"0":res.substr(idx);    
    }

/*
 * @lc app=leetcode id=187 lang=cpp
 *
 * [187] Repeated DNA Sequences
 */

// @lc code=start
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string, int> mp;
        int i=0;
        while(i+9<s.length()){
            mp[s.substr(i,10)]++;
            i++;
        }
        vector<string> res;
        for(auto& x:mp){
            if(x.second>1)
                res.push_back(x.first);
        }
        return res;
    }
};
// @lc code=end


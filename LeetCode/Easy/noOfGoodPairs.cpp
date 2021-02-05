class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> frequency;
        int good_pair = 0;
        for(auto num:nums){
            if(frequency.find(num) != frequency.end()){
                good_pair+=frequency[num];
            }
            frequency[num]++;
            // cout<<frequency[num];
        }
        return good_pair;
    }
};
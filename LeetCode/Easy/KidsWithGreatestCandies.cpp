class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> answer;
        int maximum = *max_element(candies.begin(), candies.end());
        for(int i=0; i<candies.size(); i++){
            if(candies[i] + extraCandies >= maximum){
                answer.push_back(true);
            }else{
                answer.push_back(false);
            }
        }
        return answer;
    }
};
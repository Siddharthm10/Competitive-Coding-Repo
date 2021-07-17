class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> kohinoors;
        int counter = 0;
        for(auto jewel:jewels){
            kohinoors[jewel]++;
        }
        for(auto stone:stones){
            if(kohinoors.find(stone)!=kohinoors.end()){
                counter++;
            }
        }
        return counter;
    }
};
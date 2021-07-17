class Solution {
public:
    void print(vector<int> scores)
    {
        for(auto score:scores){
            cout<<score<<endl;
        }
    }
    int calPoints(vector<string>& ops) {
        vector<int> scores;
        // int totalScore=0;
        for(int i=0; i<ops.size(); i++)
        {
            if(ops[i]=="C")
            {
                scores.pop_back();
            }
            else if(ops[i]=="+")
            {
                scores.push_back(scores[scores.size()-1] + scores[scores.size()-2]);
            }
            else if(ops[i]=="D")
            {
                scores.push_back(scores.back()*2);
            }
            else
            {
                scores.push_back(stoi(ops[i]));
            }
        }
        print(scores);
        
        return accumulate(scores.begin(), scores.end(), 0);
    }
};
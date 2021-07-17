class Solution {
public:
    int minPartitions(string n) {
        int maxNumber = 0;
        for(int i=0; i<n.length(); i++)
        {
            if(maxNumber<(n[i]-'0'))
            {
                maxNumber = n[i]-'0';
            }
        }
        return maxNumber;
    }
};
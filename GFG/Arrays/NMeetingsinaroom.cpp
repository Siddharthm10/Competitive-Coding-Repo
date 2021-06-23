class Solution
{
    public:

        int maxMeetings(int start[], int end[], int n)
        {
            // Your code here
            vector<pair<int, int>> timeLog;
            for(int i=0; i<n; i++)
            {
                timeLog.push_back(make_pair(end[i], start[i]));
            }

            sort(timeLog.begin(), timeLog.end());

            int lastEndTime = -1;
            int count = 0;
            for(int i=0; i<n; i++)
            {
                if(timeLog[i].second<=lastEndTime)
                {
                    continue;    
                }
                else
                {
                    count++;
                    lastEndTime = timeLog[i].first;
                }
            }

            return count;
        }
};

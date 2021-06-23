/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
        //sort job array in descending order
        static bool comp(const Job &a, const Job &b)
        {
            return a.profit > b.profit;
        }

        void print(Job arr[], int n)
        {
            for(int i=0; i<n; i++)
            {
                cout<<arr[i].dead<<" "<<arr[i].profit<<endl;
            }
            cout<<endl;
        }


        //Function to find the maximum profit and the number of jobs done.
        vector<int> JobScheduling(Job arr[], int n) 
        { 
            sort(arr, arr+n, comp);

            int profit = 0;
            int count = 0;
            bool slot[n];
            
            for(int i=0; i<n; i++)
                slot[i] = false;//all slots are free

            for(int i=0; i<n; i++)
            {
                for(int j=min(n, arr[i].dead-1); j>=0; j--)
                {
                    if(slot[j]==false)
                    {
                        profit += arr[i].profit;
                        slot[j] = true;
                        count++;
                        break;
                    }
                }
            }
            return {count, profit};
        } 
};
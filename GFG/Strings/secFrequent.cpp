class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        map<string,int> m;
        for(int i=0; i<n; i++){
            m[arr[i]]++;
        }
        int max = INT_MIN;
        for(auto x:m){
            if(max<x.second){
                max = x.second;
            }
        }
        int secMax = INT_MIN;
        for(auto x:m){
            if(x.second<max && x.second>secMax){
                secMax = x.second;
            }
        }
        for(auto x:m){
            if(x.second==secMax) return x.first;
        }
        return "";
    }
};

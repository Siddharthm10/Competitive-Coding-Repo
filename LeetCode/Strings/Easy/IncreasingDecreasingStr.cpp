lass Solution {
public:
    string sortString(string s) 
    {
        map<char,int> freq;
        string res="";
        for(int i=0;i<s.size();i++)
            freq[s[i]]++;
        
        while(res.size()!=s.size())
        {
              for(auto itr=freq.begin();itr!=freq.end();itr++)
                  if(itr->second>0)
                      res.push_back(itr->first),itr->second-=1;
          
              for(auto itr1=freq.rbegin();itr1!=freq.rend();itr1++)
                  if(itr1->second>0)
                      res.push_back(itr1->first),itr1->second-=1;
        }
        return res;
    }
};
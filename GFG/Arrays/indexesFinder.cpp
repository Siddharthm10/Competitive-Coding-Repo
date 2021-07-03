class Solution
{
    public:
    long long firstOccurenceFinder(vector<long long> v, long long x, long long start, long long end)
    {
        if(end>=start){
            long long middle = (start+end)/2;
            if((middle==0||x>v[middle-1]) && v[middle]==x){
                return middle;
            }
            else if(x>v[middle]){
                return firstOccurenceFinder(v,x,middle+1, end);
            }
            else
                return firstOccurenceFinder(v,x,start,middle-1);
        }
        return -1;
    }
    
    long long lastOccurenceFinder(vector<long long> v, long long x, long long start, long long end){
        if(end>=start){
            long long mid = end + (start-end)/2;
            if((mid==v.size() - 1 || x<v[mid+1])&& v[mid]==x){
                return mid;
            }else if(x<v[mid])
                return lastOccurenceFinder(v,x,start,mid-1);
            else
                return lastOccurenceFinder(v,x,mid+1,end);
        }
        return -1;
    }
    
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        return {firstOccurenceFinder(v,x,0,v.size()-1), lastOccurenceFinder(v,x,0,v.size()-1)};
    }
};

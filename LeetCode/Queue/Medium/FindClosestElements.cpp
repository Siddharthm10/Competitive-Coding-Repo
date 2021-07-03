class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> p;
        for(int i=0; i<arr.size(); i++){
            p.push({abs(x-arr[i]),arr[i]});
            if(p.size()>k) p.pop();
        }
        vector<int> v;
        while(p.size()>0){
            v.push_back(p.top().second);
            p.pop();
        }
        sort(v.begin(), v.end());
        return v;        
    }
};

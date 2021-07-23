class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        map<int, vector<int>> m;
        for(int i=0; i<n; i++){
            m[arr[i]].push_back(i);
        }
        int counter=0;
        for(int i=0; i<n; i++){
            if(arr[i]+arr[i]==k) counter--;
            if(m[k-arr[i]].size()>0) {
                counter+=m[k-arr[i]].size();
            }
        }
        return counter/2;
    }
};


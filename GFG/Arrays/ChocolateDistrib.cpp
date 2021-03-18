long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    long long minDiff = INT_MAX;
    sort(a.begin(), a.end());
    for(int i=0; i+m-1<n; i++){
        int temp = a[i+m-1] - a[i];
        if(temp<minDiff){
            minDiff = temp;
        }
    }
    return minDiff;
}
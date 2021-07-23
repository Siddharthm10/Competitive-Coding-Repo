
class Solution {
  public:
    void print(int arr[], int n){
        cout<<"Here is the array: ";
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr, arr+n);
        int minEle = arr[0];
        int maxEle = arr[n-1];
        int result = maxEle - minEle;
        
        for(int i=0; i<n; i++){
            if(arr[i]>=k && arr[n-1]>=k){
                maxEle = max(arr[i-1]+k, arr[n-1]-k);
                minEle = min(arr[0]+k, arr[i]-k);
                result = min(result, maxEle - minEle);
            }
        }
        // print(arr,n);
        return result;
    }
};

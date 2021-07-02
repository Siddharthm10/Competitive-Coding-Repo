
class Solution{
  public:
    int minJumpsHelper(int arr[], vector<int> v,
                       int n, int start, int jumps)
    {
      if(jumps==0) return -1;
      if(start+jumps>=n) return 0;
      int minDist = INT_MIN;
      int minIndex = start;

      for(int i=start+1; i<start+jumps; i++)
      {
        if(v[minIndex]>v[i])
        {
          minIndex = i;
        }
      }
      int answer = minJumpsHelper(arr, v, n, minIndex+1, arr[minIndex]);
      if(answer == -1) return -1;
      return 1 + answer;
    }
    int minJumps(int arr[], int n)
    {
      if(n==1) return 0;
      vector<int> v(n);
      for(int i=0; i<n; i++){
        v[i] = n - arr[i] - i - 1;
      }
      int jumps = arr[0];

      int answer = minJumpsHelper(arr, v, n, 1, jumps);
      if(answer == -1) return -1;
      return 1 + answer;
    }
};

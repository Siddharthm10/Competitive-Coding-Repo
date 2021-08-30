class Solution {
  public:
    int isPossible(int N, int arr[]) {
        // code here
        int sumOfDigits = 0;
        for(int i=0; i<N; i++){
            int temp = arr[i];
            while(temp){
                sumOfDigits += temp%10;
                temp /= 10;
            }
        }
        if(sumOfDigits%3==0) return 1;
        else return 0;
    }
};

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        // code here
        int carry = 1; 
        reverse(arr.begin(), arr.end());
        int i=0;
        while(carry!=0){
            if(i>=arr.size()){
                arr.push_back(1);
                break;
            }
            
            int sum = arr[i] + carry;
            carry = sum/10;
            arr[i] = sum%10;
            i++;
        }
        reverse(arr.begin(), arr.end());
        return arr;
    }
};

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int tobinary(unsigned number){
        int count = 0;
        if(number%2==1){
            count++;
        }
        while(number>1){
            number = number/2;
            if(number % 2==1){
                count++;
            }
        }
        return count;
    }
    int setBits(int N) {
        // Write Your Code here
        return tobinary(N);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}
  // } Driver Code Ends

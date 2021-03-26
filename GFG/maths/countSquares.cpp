// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    int countSquares(int N) {
        // code here
        int count=1;
        if(N==1){return 0;}
        while(N>(count+1)*(count+1)){
            count++;
        }
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}  // } Driver Code Ends

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented

/*
struct Item{
    int value;
    int weight;
};
*/

bool comp(const pair<int,double> a, const pair<int,double> b){
    return a.second>b.second;
}

void print(const vector<pair<int, double>> data){
    for(int i=0; i<data.size(); i++){
        cout<<data[i].first<<" "<<data[i].second<<endl;
    }
}

class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        double valueByWeight[n];
        for(int i=0; i<n; i++){
            valueByWeight[i] = ((double)arr[i].value/(double)arr[i].weight);
        }

        vector<pair<int,double>> data;
        for(int i=0; i<n; i++){
            data.push_back(make_pair(arr[i].weight, valueByWeight[i]));
        }

        sort(data.begin(), data.end(), comp);
        // print(data); 
        
        double maxValue = 0;
        for(int i=0; i<n; i++){
            if(data[i].first >= W){
                maxValue += data[i].second * W;
                break;
            }
            else{
                maxValue += data[i].second * data[i].first;
                W -= data[i].first;
            }
        }
        return maxValue;
    }
        
};




// { Driver Code Starts.
int main()
{
    int t;
    //taking testcases
    cin>>t;
    cout<<setprecision(2)<<fixed;
    while(t--){
        //size of array and weight
        int n, W;
        cin>>n>>W;
        
        Item arr[n];
        //value and weight of each item
        for(int i=0;i<n;i++){
            cin>>arr[i].value>>arr[i].weight;
        }
        
        //function call
        Solution ob;
        cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
    }
    return 0;
}  // } Driver Code Ends
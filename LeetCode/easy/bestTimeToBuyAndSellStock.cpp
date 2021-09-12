/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minPrice = INT_MAX;
        int maxPrice = -1;
        int profit = 0;
        for(int i=0; i<n; i++){
            if(minPrice>prices[i]){
                maxPrice = prices[i];
                minPrice = prices[i];
            }
            maxPrice = max(maxPrice, prices[i]);
            profit = max(profit, maxPrice - minPrice);
        }
        return profit;
    }
};
// @lc code=end


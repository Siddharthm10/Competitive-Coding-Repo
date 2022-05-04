/*
 * @lc app=leetcode id=1491 lang=cpp
 *
 * [1491] Average Salary Excluding the Minimum and Maximum Salary
 */

// @lc code=start
class Solution {
public:
    double average(vector<int>& salary) {
        double ans;
        int minVal = salary[0], maxVal = salary[0];
        for(int i=0; i<salary.size(); i++){
            ans+=salary[i];
            if(salary[i]<minVal){
                minVal = salary[i];
            } else if(salary[i]>maxVal){
                maxVal = salary[i];
            }
        }
        ans = ans-maxVal-minVal;
        return (double)(ans/(double)(salary.size()-2));
    }
};
// @lc code=end


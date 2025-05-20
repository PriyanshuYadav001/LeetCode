/*
 * @lc app=leetcode id=2110 lang=cpp
 *
 * [2110] Number of Smooth Descent Periods of a Stock
 */

// @lc code=start
class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long res=0, count=1;
        for(int i=1;i<prices.size();i++){
            if(prices[i-1]-prices[i]==1) count++;
            else{
                res+=count*(count+1)/2;
                count=1;
            }
        }
        res+=count*(count+1)/2;
        return res;
    }
};
// @lc code=end


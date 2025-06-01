/*
 * @lc app=leetcode id=1716 lang=cpp
 *
 * [1716] Calculate Money in Leetcode Bank
 */

// @lc code=start
class Solution {
public:
    int totalMoney(int n) {
        int w=n/7;
        int d=n%7;
        return 28*w+w*d+7*w*(w-1)/2+d*(d+1)/2;
    }
};
// @lc code=end


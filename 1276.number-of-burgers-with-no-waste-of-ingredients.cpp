/*
 * @lc app=leetcode id=1276 lang=cpp
 *
 * [1276] Number of Burgers with No Waste of Ingredients
 */

// @lc code=start
class Solution {
public:
    vector<int> numOfBurgers(int t, int c) {
        if(t<=4*c && t>=2*c && t%2==0)return {(t-2*c)/2,(4*c-t)/2};
        else return {};
    }
};
// @lc code=end


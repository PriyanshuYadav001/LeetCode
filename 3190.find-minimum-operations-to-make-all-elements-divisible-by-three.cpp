/*
 * @lc app=leetcode id=3190 lang=cpp
 *
 * [3190] Find Minimum Operations to Make All Elements Divisible by Three
 */

// @lc code=start
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int res=0;
        for(int n:nums) res+=(min(n%3,3-n%3));
        return res;
    }
};
// @lc code=end


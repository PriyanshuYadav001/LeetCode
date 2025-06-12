/*
 * @lc app=leetcode id=3423 lang=cpp
 *
 * [3423] Maximum Difference Between Adjacent Elements in a Circular Array
 */

// @lc code=start
class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n = nums.size();
        int res = abs(nums[n - 1] - nums[0]);
        for (int i = 0; i < n - 1; i++) {
            res = max(res, abs(nums[i + 1] - nums[i]));
        }
        return res;
    }
};
// @lc code=end


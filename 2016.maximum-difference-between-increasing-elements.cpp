/*
 * @lc app=leetcode id=2016 lang=cpp
 *
 * [2016] Maximum Difference Between Increasing Elements
 */

// @lc code=start
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int res = -1;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] < nums[j])
                    res = max(res, nums[j] - nums[i]);
            }
        }
        return res;
    }
};
// @lc code=end


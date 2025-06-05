/*
 * @lc app=leetcode id=2500 lang=cpp
 *
 * [2500] Delete Greatest Value in Each Row
 */

// @lc code=start
class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int res = 0;
        int max_ele = 0;
        for (auto& row : grid)
            sort(row.begin(), row.end());

        for (int j = 0; j < grid[0].size(); j++) {
            for (int i = 0; i < grid.size(); i++) {
                max_ele = max(max_ele, grid[i][j]);
            }
            res += max_ele;
            max_ele = 0;
        }
        return res;
    }
};
// @lc code=end


/*
 * @lc app=leetcode id=3502 lang=cpp
 *
 * [3502] Minimum Cost to Reach Every Position
 */

// @lc code=start
class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int n = cost.size();
        vector<int> res(n);
        res[0] = cost[0];
        int val = res[0];
        for (int i = 1 ; i < n ; i++ ) {
            if (cost[i] < val)
                val = cost[i];
            res[i] = val;
        }
        return res;
    }
};
// @lc code=end


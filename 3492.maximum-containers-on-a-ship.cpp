/*
 * @lc app=leetcode id=3492 lang=cpp
 *
 * [3492] Maximum Containers on a Ship
 */

// @lc code=start
class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        return min(n*n,maxWeight/w);
    }
};
// @lc code=end


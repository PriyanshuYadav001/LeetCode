/*
 * @lc app=leetcode id=1298 lang=cpp
 *
 * [1298] Maximum Candies You Can Get from Boxes
 */

// @lc code=start
class Solution {
public:
    int maxCandies(vector<int>& status, vector<int>& candies,
                   vector<vector<int>>& keys,
                   vector<vector<int>>& containedBoxes,
                   vector<int>& initialBoxes) {
        queue<int> q;
        for (int box : initialBoxes)
            q.push(box);

        int res = 0;

        while (!q.empty()) {
            int box = q.front();
            q.pop();

            if (status[box] == 0) {
                if (q.empty())
                    return res;
                q.push(box);
            } else {
                res += candies[box];

                for (int key : keys[box]) {
                    status[key] = 1;
                }

                for (int contained : containedBoxes[box]) {
                    q.push(contained);
                }
            }
        }
        return res;
    }
};
// @lc code=end


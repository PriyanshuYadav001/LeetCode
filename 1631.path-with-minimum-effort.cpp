/*
 * @lc app=leetcode id=1631 lang=cpp
 *
 * [1631] Path With Minimum Effort
 */

// @lc code=start
class Solution {
public:
    typedef pair<int, pair<int, int>> P;
    vector<vector<int>> dirs = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    int minimumEffortPath(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        auto isSafe = [&](int x, int y) {
            return x >= 0 && x < m && y < n && y >= 0;
        };

        vector<vector<int>> res(m, vector<int>(n, INT_MAX));
        priority_queue<P, vector<P>, greater<P>> pq;
        pq.push({0, {0, 0}});
        res[0][0] = 0;

        while (!pq.empty()) {
            int diff = pq.top().first;
            int x = pq.top().second.first;
            int y = pq.top().second.second;
            pq.pop();

            if(x==m-1 && y==n-1) return diff;

            for (auto dir : dirs) {
                int r = x + dir[0];
                int c = y + dir[1];

                if (isSafe(r, c)) {
                    int absDiff = abs(grid[x][y] - grid[r][c]);
                    int maxDiff = max(diff, absDiff);

                    if (maxDiff < res[r][c]) {
                        res[r][c] = maxDiff;
                        pq.push({maxDiff, {r, c}});
                    }
                }
            }
        }
        return res[m - 1][n - 1];
    }
};
// @lc code=end
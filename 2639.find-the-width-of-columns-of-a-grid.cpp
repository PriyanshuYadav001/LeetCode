/*
 * @lc app=leetcode id=2639 lang=cpp
 *
 * [2639] Find the Width of Columns of a Grid
 */

// @lc code=start
class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        vector<int> res;
        int ans=0;
        for(int j=0;j<grid[0].size();j++){
            for(int i=0;i<grid.size();i++){
                ans=max(ans,(int)to_string(grid[i][j]).size());
            }
            res.push_back(ans);
            ans=0;
        }
        return res;
    }
};
// @lc code=end


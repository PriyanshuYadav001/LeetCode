/*
 * @lc app=leetcode id=2352 lang=cpp
 *
 * [2352] Equal Row and Column Pairs
 */

// @lc code=start
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int res=0;
        map<vector<int>,int> mp;

        for(int i=0;i<grid.size();i++) mp[grid[i]]++;

        for(int i=0;i<grid[0].size();i++){
            vector<int> arr;
            for(int j=0;j<grid.size();j++){
                arr.push_back(grid[j][i]);
            }
            res+=mp[arr];
        }
        return res;
    }
};
// @lc code=end


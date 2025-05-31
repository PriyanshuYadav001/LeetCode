/*
 * @lc app=leetcode id=3446 lang=cpp
 *
 * [3446] Sort Matrix by Diagonals
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        unordered_map<int,vector<int>> mp;
        int n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) mp[i-j].push_back(grid[i][j]);
        }
        for(auto &m:mp){
            if(m.first>=0) sort(m.second.begin(),m.second.end());
            else{
                sort(m.second.rbegin(),m.second.rend());
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                grid[i][j]=mp[i-j].back();
                mp[i-j].pop_back();
            }
        }
        return grid;
    }
};
// @lc code=end


/*
 * @lc app=leetcode id=2850 lang=cpp
 *
 * [2850] Minimum Moves to Spread Stones Over Grid
 */

// @lc code=start
class Solution {
public:
    int dfs(int i,vector<pair<int,int>>& zeroes, vector<pair<int,int>>& extras, vector<vector<int>>& grid){
        if(i>zeroes.size()-1) return 0;

        int res=INT_MAX;
        for(int j=0;j<extras.size();j++){
            int x=extras[j].first, y=extras[j].second;
            if(grid[x][y]>1){
                grid[x][y]--;
                res=min(res,abs(zeroes[i].first-x)+abs(zeroes[i].second-y)+dfs(i+1,zeroes,extras,grid));
                grid[x][y]++;
            }
        }
        return res;
    }
    int minimumMoves(vector<vector<int>>& grid) {
        vector<pair<int,int>> zeroes;
        vector<pair<int,int>> extras;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0) zeroes.push_back({i,j});
                else if(grid[i][j]>1) extras.push_back({i,j});
            }
        }
        
        if(zeroes.size()==0) return 0;
        return dfs(0,zeroes,extras,grid);
    }
};
// @lc code=end


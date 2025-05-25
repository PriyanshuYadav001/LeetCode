/*
 * @lc app=leetcode id=1254 lang=cpp
 *
 * [1254] Number of Closed Islands
 */

// @lc code=start
class Solution {
public:

    bool dfs(vector<vector<int>>& grid, int i,int j){
        if(i<0 || j<0 || i>grid.size()-1 || j>grid[0].size()-1) return false;
        if(grid[i][j]==1) return true;

        grid[i][j]=1;

        bool left=dfs(grid,i-1,j);
        bool right=dfs(grid,i+1,j);
        bool up=dfs(grid,i,j-1);
        bool down=dfs(grid,i,j+1);

        return left && up && down && right;
    }

    int closedIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int res=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0) if(dfs(grid,i,j)==true) res++;
            }
        }
        return res;
    }
};
// @lc code=end


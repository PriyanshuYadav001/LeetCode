/*
 * @lc app=leetcode id=1905 lang=cpp
 *
 * [1905] Count Sub Islands
 */

// @lc code=start
class Solution {
public:
    bool dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int r,int c, int m, int n){
        if(r<0 || r>m-1 || c<0 || c> n-1) return true;
        if(grid2[r][c]==0) return true;
        if(grid1[r][c]==0) return false;

        grid2[r][c]=0;
        bool up=dfs(grid1,grid2,r,c-1,m,n);
        bool down=dfs(grid1,grid2,r,c+1,m,n);
        bool left=dfs(grid1,grid2,r-1,c,m,n);
        bool right=dfs(grid1,grid2,r+1,c,m,n);

        return up && left && right && down;

    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int res=0;
        int m=grid1.size();
        int n=grid1[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid2[i][j]==1){
                    if(dfs(grid1,grid2,i,j,m,n)) res++;
                }
            }
        }
        return res;
    }
};
// @lc code=end


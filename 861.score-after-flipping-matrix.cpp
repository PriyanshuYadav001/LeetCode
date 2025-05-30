/*
 * @lc app=leetcode id=861 lang=cpp
 *
 * [861] Score After Flipping Matrix
 */

// @lc code=start
class Solution {
public:
    int binToInt(vector<int>& arr){
        int ans=0;
        for(int n:arr) ans=ans*2+n;
        return ans;
    }

    void flip_col(vector<vector<int>>& grid,int m, int col){
        for(int i=0;i<m;i++){
            if(grid[i][col]==0) grid[i][col]=1;
            else grid[i][col]=0;
        }
    }

    void flip_row(vector<vector<int>>& grid,int n, int row){
        for(int j=0;j<n;j++){
            if(grid[row][j]==0) grid[row][j]=1;
            else grid[row][j]=0;
        }
    }

    int matrixScore(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        for(int i=0;i<m;i++){
            if(grid[i][0]==0) flip_row(grid,n,i);
        }
        for(int j=0;j<n;j++){
            int zeroes=0,ones=0;
            for(int i=0;i<m;i++){
                if(grid[i][j]==0) zeroes++;
                else ones++;
            }
            if(zeroes>ones) flip_col(grid,m,j);
        }
        int res=0;
        for(int i=0;i<m;i++) res+=binToInt(grid[i]);
        return res;
    }
};
// @lc code=end


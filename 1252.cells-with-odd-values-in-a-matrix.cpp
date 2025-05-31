/*
 * @lc app=leetcode id=1252 lang=cpp
 *
 * [1252] Cells with Odd Values in a Matrix
 */

// @lc code=start
class Solution {
public:
    void inc_row(vector<vector<int>>& grid,int row,int m,int n){
        for(int j=0;j<n;j++) grid[row][j]++;
    }

    void inc_col(vector<vector<int>>& grid,int col,int m,int n){
        for(int i=0;i<m;i++) grid[i][col]++;
    }
    
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> grid(m,vector<int>(n,0));
        for(auto idx:indices){
            inc_row(grid,idx[0],m,n);
            inc_col(grid,idx[1],m,n);
        }
        int res=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]%2==1) res++;
            }
        }
        return res;
    }
};
// @lc code=end


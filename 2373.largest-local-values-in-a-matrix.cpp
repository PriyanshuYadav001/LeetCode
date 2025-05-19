/*
 * @lc app=leetcode id=2373 lang=cpp
 *
 * [2373] Largest Local Values in a Matrix
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>> res(n-2,vector<int>(n-2,0));
        for(int i=0;i<n-2;i++){
            for(int j=0;j<n-2;j++){
                for(int row=i;row<i+3;row++){
                    for(int col=j;col<j+3;col++){
                        res[i][j]=max(res[i][j],grid[row][col]);
                    }
                }
            }
        }
        return res;
    }
};
// @lc code=end


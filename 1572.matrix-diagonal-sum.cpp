/*
 * @lc app=leetcode id=1572 lang=cpp
 *
 * [1572] Matrix Diagonal Sum
 */

// @lc code=start
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int res=0;
        if(n%2==1) res-=mat[n/2][n/2];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) res+=mat[i][j];
                if(i+j==n-1) res+=mat[i][j];
            }
        }
        return res;
    }
};
// @lc code=end


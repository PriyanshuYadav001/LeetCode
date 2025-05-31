/*
 * @lc app=leetcode id=1314 lang=cpp
 *
 * [1314] Matrix Block Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>> res(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int ans=0;
                for(int r=max(0,i-k);r<=min(i+k,m-1);r++){
                    for(int c=max(0,j-k);c<=min(j+k,n-1);c++){
                        ans+=mat[r][c];
                    }
                }
                res[i][j]=ans;
            }
        }
        return res;
    }
};
// @lc code=end


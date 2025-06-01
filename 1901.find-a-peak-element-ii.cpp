/*
 * @lc app=leetcode id=1901 lang=cpp
 *
 * [1901] Find a Peak Element II
 */

// @lc code=start
class Solution {
public:

    bool isPeak(vector<vector<int>>& mat,int i, int j){
        int m=mat.size();
        int n=mat[0].size();
        if(i>0 && mat[i][j]<=mat[i-1][j]) return false; //up
        if(i<m-1 && mat[i][j]<=mat[i+1][j]) return false; //down
        if(j>0 && mat[i][j]<=mat[i][j-1]) return false; //left
        if(j<n-1 && mat[i][j]<=mat[i][j+1]) return false;   //right
        return true;
    }
    
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(isPeak(mat,i,j)){
                    return {i,j};
                }
            }
        }
        return {};
    }
};
// @lc code=end


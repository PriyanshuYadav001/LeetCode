/*
 * @lc app=leetcode id=1992 lang=cpp
 *
 * [1992] Find All Groups of Farmland
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> res;

    void dfs(int i,int j,int& r1,int& c1,int& r2,int& c2, vector<vector<int>>& land){
        int m=land.size();
        int n=land[0].size();

        if(i<0 || i>m-1 || j<0 || j>n-1) return;
        if(land[i][j]==1){
            land[i][j]=2;
            r1=min(r1,i);
            c1=min(c1,j);
            r2=max(r2,i);
            c2=max(c2,j);
            dfs(i-1,j,r1,c1,r2,c2,land);
            dfs(i+1,j,r1,c1,r2,c2,land);
            dfs(i,j-1,r1,c1,r2,c2,land);
            dfs(i,j+1,r1,c1,r2,c2,land);
        }
    }

    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int m=land.size();
        int n=land[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(land[i][j]==1){
                    int r1=i,c1=j,r2=i,c2=j;
                    dfs(i,j,r1,c1,r2,c2,land);
                    res.push_back({r1,c1,r2,c2});
                }
            }
        }
        return res;
    }
};
// @lc code=end


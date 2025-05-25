/*
 * @lc app=leetcode id=1765 lang=cpp
 *
 * [1765] Map of Highest Peak
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m=isWater.size();
        int n=isWater[0].size();
        vector<vector<int>> height(m,vector<int>(n,-1));

        queue<pair<int,int>> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(isWater[i][j]==1){
                    height[i][j]=0;
                    q.push({i,j});
                }
            }
        }

        vector<vector<int>> dir={{-1,0},{0,1},{0,-1},{1,0}};
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            int row=p.first, col=p.second;

            for(int i=0;i<4;i++){
                int r=row+dir[i][0], c=col+dir[i][1];

                if(r>=0 && c>=0 && r<m && c<n && height[r][c]==-1){
                    height[r][c]=height[row][col]+1;
                    q.push({r,c});
                }
            }
        }
        return height;
    }
};
// @lc code=end


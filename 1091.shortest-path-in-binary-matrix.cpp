/*
 * @lc app=leetcode id=1091 lang=cpp
 *
 * [1091] Shortest Path in Binary Matrix
 */

// @lc code=start
class Solution {
public:
    typedef pair<int,pair<int,int>> P;
    vector<vector<int>> dirs={{1,0},{-1,0},{0,1},{0,-1},{1,1},{-1,-1},{1,-1},{-1,1}}; 
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        if(m==0 || n==0 || grid[0][0]==1) return -1;

        auto isSafe = [&](int x,int y){
            return x>=0 && x<m && y<n && y>=0;
        };

        vector<vector<int>> res(m,vector<int>(n,INT_MAX));
        priority_queue<P,vector<P>, greater<P>> pq;
        pq.push({0,{0,0}});
        res[0][0]=0;

        while(!pq.empty()){
            int dist=pq.top().first;
            int x=pq.top().second.first;
            int y=pq.top().second.second;
            pq.pop();

            for(auto dir:dirs){
                int r=x+dir[0];
                int c=y+dir[1];

                if(isSafe(r,c) && grid[r][c]==0 && 1+dist<res[r][c]){
                    res[r][c]=1+dist;
                    pq.push({1+dist,{r,c}});
                }
            }
        }
        if(res[m-1][n-1]==INT_MAX) return -1;
        return res[m-1][n-1]+1;
    }
};
// @lc code=end


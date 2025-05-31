/*
 * @lc app=leetcode id=3417 lang=cpp
 *
 * [3417] Zigzag Grid Traversal With Skip
 */

// @lc code=start
class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int> res;
        for(int i=0;i<grid.size();i++){
            if(i%2==0){
                for(int j=0;j<grid[0].size();j+=2) res.push_back(grid[i][j]);
            }
            else{
                if(grid[0].size()%2==0){
                    for(int j=grid[0].size()-1;j>=0;j-=2) res.push_back(grid[i][j]);
                }
                else{
                    for(int j=grid[0].size()-2;j>=0;j-=2) res.push_back(grid[i][j]);
                }
            }
        }
        return res;
    }
};
// @lc code=end


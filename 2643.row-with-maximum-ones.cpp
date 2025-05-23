/*
 * @lc app=leetcode id=2643 lang=cpp
 *
 * [2643] Row With Maximum Ones
 */

// @lc code=start
class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        priority_queue<pair<int,int>> pq;
        int m=mat.size();
        int n=mat[0].size();
        for(int i=0;i<m;i++){
            int ones=0;
            for(int j=0;j<n;j++){
                if(mat[i][j]==1) ones++;
            }
            pq.push({ones,-i});
        }
        return {-pq.top().second,pq.top().first};
    }
};
// @lc code=end


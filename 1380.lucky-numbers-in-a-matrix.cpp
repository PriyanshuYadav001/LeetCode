/*
 * @lc app=leetcode id=1380 lang=cpp
 *
 * [1380] Lucky Numbers in a Matrix
 */

// @lc code=start
class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> rowMin;
        unordered_set<int> colMax;
        for(int i=0;i<matrix.size();i++){
            int mini=INT_MAX;
            for(int j=0;j<matrix[0].size();j++){
                mini=min(mini,matrix[i][j]);
            }
            rowMin.push_back(mini);
        }
        for(int i=0;i<matrix[0].size();i++){
            int maxi=INT_MIN;
            for(int j=0;j<matrix.size();j++){
                maxi=max(maxi,matrix[j][i]);
            }
            colMax.insert(maxi);
        }
        vector<int> res;
        for(int n:rowMin){
            if(colMax.find(n)!=colMax.end()){
                res.push_back(n);
            }
        }
        return res;
    }
};
// @lc code=end


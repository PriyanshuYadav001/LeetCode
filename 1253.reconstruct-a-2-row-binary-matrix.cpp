/*
 * @lc app=leetcode id=1253 lang=cpp
 *
 * [1253] Reconstruct a 2-Row Binary Matrix
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
        int n=colsum.size();
        vector<vector<int>> res(2,vector<int>(n,0));
        for(int i=0;i<n;i++){
            if(colsum[i]==2 && upper>0 && lower>0){
                res[0][i]=1;
                res[1][i]=1;
                upper--;
                lower--;
            }
            else if(colsum[i]==1){
                if(upper>=lower && upper>0){
                    res[0][i]=1;
                    upper--;
                }
                else if(lower>0){
                    res[1][i]=1;
                    lower--;
                }
                else return {};
            }
        }
        if(upper>0 || lower>0) return {};
        return res;
    }
};
// @lc code=end


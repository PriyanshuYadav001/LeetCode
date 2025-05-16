/*
 * @lc app=leetcode id=1893 lang=cpp
 *
 * [1893] Check if All the Integers in a Range Are Covered
 */

// @lc code=start
class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        vector<bool> check(51,false);
        for(int i=left;i<=right;i++){
            for(auto r:ranges){
                if(r[0]<=i && i<=r[1]) check[i]=true;
            }
        }
        for(int i=left;i<=right;i++){
            if(check[i]==false) return false;
        }
        return true;
    }
};
// @lc code=end


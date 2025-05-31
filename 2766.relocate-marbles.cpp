/*
 * @lc app=leetcode id=2766 lang=cpp
 *
 * [2766] Relocate Marbles
 */

// @lc code=start
class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
        unordered_set<int> idx;
        for(int n:nums) idx.insert(n);
        for(int i=0;i<moveFrom.size();i++){
            idx.erase(moveFrom[i]);
            idx.insert(moveTo[i]);
        }
        vector<int> res(idx.begin(),idx.end());
        sort(res.begin(),res.end());
        return res;
    }
};
// @lc code=end


/*
 * @lc app=leetcode id=1128 lang=cpp
 *
 * [1128] Number of Equivalent Domino Pairs
 */

// @lc code=start
#include <map>
class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        for(auto &d:dominoes) sort(d.begin(),d.end());
        unordered_map<int,int> mp;
        for(auto &d:dominoes) mp[d[0]*10+d[1]]++;
        int res=0;
        for(auto m:mp){
            res+=m.second*(m.second-1)/2;
        }
        return res;
    }
};
// @lc code=end


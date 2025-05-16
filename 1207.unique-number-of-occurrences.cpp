/*
 * @lc app=leetcode id=1207 lang=cpp
 *
 * [1207] Unique Number of Occurrences
 */

// @lc code=start
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        unordered_set<int> mySet;
        for(int n:arr) mp[n]++;
        for(auto m:mp){
            mySet.insert(m.second);
        }
        return mySet.size()==mp.size();
    }
};
// @lc code=end


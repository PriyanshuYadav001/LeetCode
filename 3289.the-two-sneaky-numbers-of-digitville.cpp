/*
 * @lc app=leetcode id=3289 lang=cpp
 *
 * [3289] The Two Sneaky Numbers of Digitville
 */

// @lc code=start
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int n:nums) mp[n]++;
        vector<int> res;
        for(auto [val,freq]:mp){
            if(freq==2) res.push_back(val);
        }
        sort(res.begin(),res.end());
        return res;
    }
};
// @lc code=end


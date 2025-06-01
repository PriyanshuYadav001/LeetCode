/*
 * @lc app=leetcode id=1629 lang=cpp
 *
 * [1629] Slowest Key
 */

// @lc code=start
class Solution {
public:
    char slowestKey(vector<int>& r, string k) {
        unordered_map<char,int> mp;
        mp[k[0]]=r[0];
        for(int i=1;i<k.size();i++){
            if(mp.find(k[i])!=mp.end()) mp[k[i]]=max(mp[k[i]],r[i]-r[i-1]);
            else mp[k[i]]=r[i]-r[i-1];
        }
        priority_queue<pair<int,char>> pq;
        for(auto [c,f]:mp) pq.push({f,c});
        return pq.top().second;
    }
};
// @lc code=end


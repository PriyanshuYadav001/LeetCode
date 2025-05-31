/*
 * @lc app=leetcode id=3386 lang=cpp
 *
 * [3386] Button with Longest Push Time
 */

// @lc code=start
class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        priority_queue<pair<int,int>> pq;
        pq.push({events[0][1],-events[0][0]});
        for(int i=1;i<events.size();i++){
            pq.push({events[i][1]-events[i-1][1],-events[i][0]});
        }
        return -pq.top().second;
    }
};
// @lc code=end


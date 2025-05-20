/*
 * @lc app=leetcode id=2432 lang=cpp
 *
 * [2432] The Employee That Worked on the Longest Task
 */

// @lc code=start
class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        vector<pair<int,int>> time(logs.size());  //time,idx
        time[0].first=logs[0][1];
        time[0].second=-logs[0][0];
        for(int i=1;i<logs.size();i++){
            time[i].first=logs[i][1]-logs[i-1][1];
            time[i].second=-logs[i][0];
        }
        priority_queue<pair<int,int>> pq;
        for(auto t:time) pq.push(t);
        return -pq.top().second;
    }
};
// @lc code=end


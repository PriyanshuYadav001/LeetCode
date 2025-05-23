/*
 * @lc app=leetcode id=2099 lang=cpp
 *
 * [2099] Find Subsequence of Length K With the Largest Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<nums.size();i++) pq.push({nums[i],-i});
        priority_queue<pair<int,int>> pq2;
        while(k--){
            pq2.push({pq.top().second,pq.top().first});
            pq.pop();
        }
        vector<int> res;
        while(!pq2.empty()){
            res.push_back(pq2.top().second);
            pq2.pop();
        }
        return res;

    }
};
// @lc code=end


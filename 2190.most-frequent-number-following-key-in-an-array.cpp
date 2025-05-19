/*
 * @lc app=leetcode id=2190 lang=cpp
 *
 * [2190] Most Frequent Number Following Key In an Array
 */

// @lc code=start
class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==key) mp[nums[i+1]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto m:mp){
            pq.push({m.second,m.first});
        }
        return pq.top().second;
    }
};
// @lc code=end


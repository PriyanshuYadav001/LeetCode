/*
 * @lc app=leetcode id=2644 lang=cpp
 *
 * [2644] Find the Maximum Divisibility Score
 */

// @lc code=start
class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        vector<pair<int,int>> arr(divisors.size(),{0,0});
        for (int i = 0; i < divisors.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] % divisors[i] == 0)
                    arr[i].first++;
            }
            arr[i].second=-divisors[i];
        }
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<arr.size();i++) pq.push(arr[i]);
        return -pq.top().second;
    }
};
// @lc code=end


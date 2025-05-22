/*
 * @lc app=leetcode id=1403 lang=cpp
 *
 * [1403] Minimum Subsequence in Non-Increasing Order
 */

// @lc code=start
class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> res;
        int sum=0;
        for(int n:nums) sum+=n;
        sort(nums.rbegin(),nums.rend());
        int curr_sum=0;
        for(int i=0;i<nums.size();i++){
            if(curr_sum>sum/2) break;
            else{
                curr_sum+=nums[i];
                res.push_back(nums[i]);
            }
        }
        return res;
    }
};
// @lc code=end


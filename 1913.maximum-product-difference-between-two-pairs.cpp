/*
 * @lc app=leetcode id=1913 lang=cpp
 *
 * [1913] Maximum Product Difference Between Two Pairs
 */

// @lc code=start
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return nums[n-2]*nums[n-1]-nums[0]*nums[1];


        
    }
};
// @lc code=end


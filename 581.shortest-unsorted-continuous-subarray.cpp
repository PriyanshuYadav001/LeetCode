/*
 * @lc app=leetcode id=581 lang=cpp
 *
 * [581] Shortest Unsorted Continuous Subarray
 */

// @lc code=start
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> sorted=nums;
        sort(sorted.begin(),sorted.end());
        int l=0,r=nums.size()-1;
        while(l<nums.size() && nums[l]==sorted[l]) l++;
        while(r>-1 && nums[r]==sorted[r]) r--;
        return max(r-l+1,0);
    }
};
// @lc code=end


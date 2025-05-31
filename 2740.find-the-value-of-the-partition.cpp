/*
 * @lc app=leetcode id=2740 lang=cpp
 *
 * [2740] Find the Value of the Partition
 */

// @lc code=start
class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        int res=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            res=min(res,nums[i]-nums[i-1]);
        }
        return res;
    }
};
// @lc code=end


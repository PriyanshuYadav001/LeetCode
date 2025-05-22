/*
 * @lc app=leetcode id=561 lang=cpp
 *
 * [561] Array Partition
 */

// @lc code=start
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int res=0;
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-2;i>=0;i-=2){
            res+=nums[i];
        }
        return res;
    }
};
// @lc code=end


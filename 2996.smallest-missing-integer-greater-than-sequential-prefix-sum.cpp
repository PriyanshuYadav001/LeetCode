/*
 * @lc app=leetcode id=2996 lang=cpp
 *
 * [2996] Smallest Missing Integer Greater Than Sequential Prefix Sum
 */

// @lc code=start
class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]+1) break;
            else sum+=nums[i];
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(sum==nums[i]) sum++;
        }
        return sum;
    }
};
// @lc code=end


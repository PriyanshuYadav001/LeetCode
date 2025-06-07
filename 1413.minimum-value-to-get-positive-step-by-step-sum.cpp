/*
 * @lc app=leetcode id=1413 lang=cpp
 *
 * [1413] Minimum Value to Get Positive Step by Step Sum
 */

// @lc code=start
class Solution {
public:
    int minStartValue(vector<int>& nums) {
        vector<int> pre(nums.size(),nums[0]);
        for(int i=1;i<nums.size();i++){
            pre[i]=pre[i-1]+nums[i];
        }
        int num=*min_element(pre.begin(),pre.end());
        if(num>0) return 1; 
        else return abs(num)+1;
    }
};
// @lc code=end


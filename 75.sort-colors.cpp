/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            int r=nums.size()-1;
            while(r>i){
                if(nums[r]<nums[i]) swap(nums[i],nums[r]);
                r--;
            }
        }
    }
};
// @lc code=end


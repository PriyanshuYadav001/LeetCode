/*
 * @lc app=leetcode id=896 lang=cpp
 *
 * [896] Monotonic Array
 */

// @lc code=start
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc=true;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                inc=false;
                break;
            }
        }

        bool dec=true;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                dec=false;
                break;
            }
        }

        return inc || dec;
    }
};
// @lc code=end


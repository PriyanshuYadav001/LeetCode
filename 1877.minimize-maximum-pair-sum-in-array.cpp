/*
 * @lc app=leetcode id=1877 lang=cpp
 *
 * [1877] Minimize Maximum Pair Sum in Array
 */

// @lc code=start
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int res=INT_MIN;
        sort(nums.begin(),nums.end());
        int left=0,right=nums.size()-1;
        while(left<right){
            res=max(res,nums[left]+nums[right]);
            left++;
            right--;
        }
        return res;
    }
};
// @lc code=end


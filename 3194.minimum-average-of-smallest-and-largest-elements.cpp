/*
 * @lc app=leetcode id=3194 lang=cpp
 *
 * [3194] Minimum Average of Smallest and Largest Elements
 */

// @lc code=start
class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double res=INT_MAX;
        sort(nums.begin(),nums.end());
        int left=0,right=nums.size()-1;
        while(left<right){
            res=min((double)res,(double)(nums[left]+nums[right])/2);
            left++;
            right--;
        }
        return res;
    }
};
// @lc code=end


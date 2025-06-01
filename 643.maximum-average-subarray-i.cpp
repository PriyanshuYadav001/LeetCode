/*
 * @lc app=leetcode id=643 lang=cpp
 *
 * [643] Maximum Average Subarray I
 */

// @lc code=start
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=accumulate(nums.begin(),nums.begin()+k,0);
        int res=sum;
        for(int i=1;i<nums.size()-k+1;i++){
            sum-=nums[i-1];
            sum+=nums[i+k-1];
            res=max(res,sum);
        }
        return (double)res/k;
    }
};
// @lc code=end


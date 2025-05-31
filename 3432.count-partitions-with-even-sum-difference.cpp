/*
 * @lc app=leetcode id=3432 lang=cpp
 *
 * [3432] Count Partitions with Even Sum Difference
 */

// @lc code=start
class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int rightSum=accumulate(nums.begin(),nums.end(),0);
        int leftSum=0;
        int res=0;
        for(int i=0;i<nums.size()-1;i++){
            leftSum+=nums[i];
            rightSum-=nums[i];
            if(leftSum%2==0 && rightSum%2==0) res++;
            else if(leftSum%2==1 && rightSum%2==1) res++;
        }
        return res;
    }
};
// @lc code=end


/*
 * @lc app=leetcode id=2789 lang=cpp
 *
 * [2789] Largest Element in an Array after Merge Operations
 */

// @lc code=start
class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        int n=nums.size();
        long long res=0;
        long long sum=0;
        for(int i=n-1;i>=0;i--){
            if(nums[i]>sum) sum=0;
            sum+=nums[i];
            res=max(res,sum);
        }
        return res;
    }
};
// @lc code=end


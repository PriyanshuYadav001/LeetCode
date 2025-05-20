/*
 * @lc app=leetcode id=3355 lang=cpp
 *
 * [3355] Zero Array Transformation I
 */

// @lc code=start
class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> diff(nums.size()+1);
        for(auto q:queries){
            diff[q[0]]--;
            if(q[1]<nums.size()-1) diff[q[1]+1]++;
        }
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=diff[i];
            if(nums[i]>-sum) return false;
        }
        return true;
    }
};
// @lc code=end


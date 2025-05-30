/*
 * @lc app=leetcode id=2587 lang=cpp
 *
 * [2587] Rearrange Array to Maximize Prefix Score
 */

// @lc code=start
class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        vector<long long> prefix(nums.size());
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        long long res=0;
        for(long long n:prefix){
            if(n>0) res++;
        }
        return res;
    }
};
// @lc code=end


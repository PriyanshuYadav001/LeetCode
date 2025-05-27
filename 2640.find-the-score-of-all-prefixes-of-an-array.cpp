/*
 * @lc app=leetcode id=2640 lang=cpp
 *
 * [2640] Find the Score of All Prefixes of an Array
 */

// @lc code=start
class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n=nums.size();
        vector<long long> max_arr(n);
        int maxi=nums[0];
        for(int i=0;i<n;i++){
            max_arr[i]=max(maxi,nums[i]);
            maxi=max(maxi,nums[i]);
        }
        max_arr[0]+=nums[0];
        for(int i=1;i<n;i++) max_arr[i]+=max_arr[i-1]+nums[i];
        return max_arr;
    }
};
// @lc code=end


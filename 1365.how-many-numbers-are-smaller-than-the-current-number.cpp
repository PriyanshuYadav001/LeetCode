/*
 * @lc app=leetcode id=1365 lang=cpp
 *
 * [1365] How Many Numbers Are Smaller Than the Current Number
 */

// @lc code=start
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted=nums;
        sort(sorted.begin(),sorted.end());
        unordered_map<int,int> mp;
        for(int i=sorted.size()-1;i>=0;i--) mp[sorted[i]]=i;
        for(int i=0;i<nums.size();i++){
            nums[i]=mp[nums[i]];
        }
        return nums;
    }
};
// @lc code=end


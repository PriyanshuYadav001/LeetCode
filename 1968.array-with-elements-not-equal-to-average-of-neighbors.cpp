/*
 * @lc app=leetcode id=1968 lang=cpp
 *
 * [1968] Array With Elements Not Equal to Average of Neighbors
 */

// @lc code=start
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> res;
        int l=0,r=nums.size()-1;
        while(l<=r){
            res.push_back(nums[l]);
            res.push_back(nums[r]);
            l++;
            r--;
        }
        if(nums.size()%2==1) res.pop_back();
        return res;
    }
};
// @lc code=end


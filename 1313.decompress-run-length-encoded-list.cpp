/*
 * @lc app=leetcode id=1313 lang=cpp
 *
 * [1313] Decompress Run-Length Encoded List
 */

// @lc code=start
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> res;
        for(int i=1;i<nums.size();i+=2){
            for(int j=0;j<nums[i-1];j++) res.push_back(nums[i]);
        }
        return res;
    }
};
// @lc code=end


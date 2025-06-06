/*
 * @lc app=leetcode id=2389 lang=cpp
 *
 * [2389] Longest Subsequence With Limited Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int> pre(nums.size());
        pre[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            pre[i]=pre[i-1]+nums[i];
        }
        int ptr=0;
        for(int &q:queries){
            if(pre[ptr]>q){
                q=ptr;
            }
            else ptr++;
        }
        return queries;
    }
};
// @lc code=end


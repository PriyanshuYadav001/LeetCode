/*
 * @lc app=leetcode id=3487 lang=cpp
 *
 * [3487] Maximum Unique Subarray Sum After Deletion
 */

// @lc code=start
class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int> st;
        vector<int> arr;
        for(int n:nums){
            if(n>0 && st.find(n)==st.end()){
                arr.push_back(n);
                st.insert(n);
            }
        }
        if(arr.empty()){
            sort(nums.begin(),nums.end());
            return nums[nums.size()-1];
        }
        return accumulate(arr.begin(),arr.end(),0);
    }
};
// @lc code=end


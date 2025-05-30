/*
 * @lc app=leetcode id=2592 lang=cpp
 *
 * [2592] Maximize Greatness of an Array
 */

// @lc code=start
class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> arr=nums;
        int res=0;
        int ptr_nums=0, ptr_arr=0;
        while(ptr_nums<nums.size() && ptr_arr<arr.size()){
            if(nums[ptr_nums]>arr[ptr_arr]){
                res++;
                ptr_arr++;
            }
            ptr_nums++;
        }
        return res;
    }
};
// @lc code=end


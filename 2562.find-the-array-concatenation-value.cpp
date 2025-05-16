/*
 * @lc app=leetcode id=2562 lang=cpp
 *
 * [2562] Find the Array Concatenation Value
 */

// @lc code=start
class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        vector<int> arr;
        long long res=0;
        for(int i=0;i<nums.size()/2;i++){
            arr.push_back(stoi((to_string(nums[i])+to_string(nums[nums.size()-1-i]))));
        }
        if(nums.size()%2==1){
            arr.push_back(nums[nums.size()/2]);
        }
        for(int n:arr) res+=n;
        return res;
    }
};
// @lc code=end


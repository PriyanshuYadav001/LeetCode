/*
 * @lc app=leetcode id=3467 lang=cpp
 *
 * [3467] Transform Array by Parity
 */

// @lc code=start
class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int zeroes=0;
        int ones=0;
        for(int n:nums){
            if(n%2==0) zeroes++;
            else ones++;
        }
        nums.clear();
        while(zeroes){
            nums.push_back(0);
            zeroes--;
        }
        while(ones){
            nums.push_back(1);
            ones--;
        }
        return nums;
        
    }
};
// @lc code=end


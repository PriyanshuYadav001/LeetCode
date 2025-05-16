/*
 * @lc app=leetcode id=1437 lang=cpp
 *
 * [1437] Check If All 1's Are at Least Length K Places Away
 */

// @lc code=start
class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        vector<int> ones;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) ones.push_back(i); 
        }
        for(int i=0;i<ones.size()-1;i++){
            if(ones[i+1]-ones[i]-1<k){
                return false;
            }
        }
        return true;
    }
};
// @lc code=end


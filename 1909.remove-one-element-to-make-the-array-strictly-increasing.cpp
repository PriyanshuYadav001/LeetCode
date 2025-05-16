/*
 * @lc app=leetcode id=1909 lang=cpp
 *
 * [1909] Remove One Element to Make the Array Strictly Increasing
 */

// @lc code=start
class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        bool check=false;
        for(int i=0;i<nums.size();i++){
            nums.erase(nums.begin()+i);
            if(nums.size()==1){
                return true;
            }
            for(int j=0;j<nums.size()-1;j++){
            if(nums[j+1]<=nums[j]) {check=false;break;}
            else check=true;
        }
        }
        return check;
    }
};
// @lc code=end


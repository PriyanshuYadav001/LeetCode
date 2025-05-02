/*
 * @lc app=leetcode id=31 lang=cpp
 *
 * [31] Next Permutation
 */

// @lc code=start
class Solution {
    public:
        void nextPermutation(vector<int>& nums) {
            if(nums.size()==1) return;
    
            int idx1=-1;
            for(int i=nums.size()-2;i>=0;i--){
                if(nums[i]<nums[i+1]){
                    idx1=i;
                    break;
                }
            }
            if(idx1<0){
                reverse(nums.begin(),nums.end());
                return;
            }
    
            int idx2=1;
            for(int i=nums.size()-1;i>=idx1;i--){
                if(nums[i]>nums[idx1]){
                    idx2=i;
                    break;
                }
            }
            swap(nums[idx1],nums[idx2]);
            sort(nums.begin()+idx1+1,nums.end());
        }
    };
// @lc code=end


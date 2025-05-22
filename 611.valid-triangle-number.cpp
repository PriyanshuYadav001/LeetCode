/*
 * @lc app=leetcode id=611 lang=cpp
 *
 * [611] Valid Triangle Number
 */

// @lc code=start
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        sort(nums.begin(),nums.end());

        for(int i=0;i<n-2;i++){
            if(nums[i]==0) continue;
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]+nums[j]>nums[k]) res++;
                    else break;
                }
            }
        }
        return res;
    }
};

// @lc code=end


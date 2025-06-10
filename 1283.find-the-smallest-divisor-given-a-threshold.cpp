/*
 * @lc app=leetcode id=1283 lang=cpp
 *
 * [1283] Find the Smallest Divisor Given a Threshold
 */

// @lc code=start
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxVal=0;
        for(int n:nums){
            maxVal=max(maxVal,n);
        }
        int res=0;
        for(int i=maxVal;i>=1;i--){
            int sum=0;
            for(int n:nums){
                sum+=ceil((double)n/i);
            }
            if(sum<=threshold){
                res=i;
                break;
            }   
        }
    }
};
// @lc code=end


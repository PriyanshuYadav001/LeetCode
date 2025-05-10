/*
 * @lc app=leetcode id=2918 lang=cpp
 *
 * [2918] Minimum Equal Sum of Two Arrays After Replacing Zeros
 */

// @lc code=start
class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long zero1=0,sum1=0,zero2=0,sum2=0;
        for(int n:nums1){
            if(n==0) n=1,zero1++;
            sum1+=n;
        }
        for(int n:nums2){
            if(n==0) n=1,zero2++;
            sum2+=n;
        }
        if(sum1==sum2) return sum1;
        else if(sum1>sum2 && zero2>0) return sum1;
        else if(sum2>sum1 && zero1>0) return sum2;
        else return -1;
    }
};
// @lc code=end


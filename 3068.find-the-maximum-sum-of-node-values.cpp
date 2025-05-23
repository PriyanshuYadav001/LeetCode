/*
 * @lc app=leetcode id=3068 lang=cpp
 *
 * [3068] Find the Maximum Sum of Node Values
 */

// @lc code=start
class Solution {
public:

    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        long long res=0, count=0, mini=INT_MAX;
        for(int i:nums){
            if((i^k)>i){
                count++;
                res+=(i^k);
            }
            else res+=i;
            mini=min(1LL*mini,1LL*abs(i-(i^k)));
        }
        if(count&1) res-=mini;
        return res;
    }
};
// @lc code=end


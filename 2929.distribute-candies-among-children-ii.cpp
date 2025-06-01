/*
 * @lc app=leetcode id=2929 lang=cpp
 *
 * [2929] Distribute Candies Among Children II
 */

// @lc code=start
class Solution {
public:
    long long distributeCandies(int n, int limit) {
        long long res=0;
        for(int i=0;i<=min(limit,n);i++){
            if (n - i <= 2 * limit) res+=min(n-i,limit)-max(0,n-i-limit)+1;
        }
        return res;
    }
};
// @lc code=end


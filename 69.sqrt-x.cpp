/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    long long mySqrt(long long x) {
        long long res=0;
        for(long long i=0;i*i<=x;i++){
            if(i*i<=x) res=i;
        }
        return res;
    }
};
// @lc code=end


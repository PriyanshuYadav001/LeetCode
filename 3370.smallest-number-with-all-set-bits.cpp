/*
 * @lc app=leetcode id=3370 lang=cpp
 *
 * [3370] Smallest Number With All Set Bits
 */

// @lc code=start
class Solution {
public:
    int smallestNumber(int n) {
        for(int i=n;i<=1000;i++){
            if(((n-1)&(n-2))==0) return n;
        }
        return 0;
    }
};
// @lc code=end


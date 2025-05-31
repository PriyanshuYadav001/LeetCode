/*
 * @lc app=leetcode id=1017 lang=cpp
 *
 * [1017] Convert to Base -2
 */

// @lc code=start
class Solution {
public:
    string baseNeg2(int n) {
        if(n==0) return "0";
        string str="";
        while(n!=0){
            int r=n%-2;
            n/=-2;
            if(r < 0) {
                r += 2;
                n += 1;
            }
            str+=(r+'0');
        }
        reverse(str.begin(),str.end());
        return str;
    }
};
// @lc code=end


/*
 * @lc app=leetcode id=2864 lang=cpp
 *
 * [2864] Maximum Odd Binary Number
 */

// @lc code=start
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones=0;
        int zeros=0;
        for(char c : s) {
            if(c == '1') {
                ones++;
            }
            else zeros++;
        }
        string res="";
        while(ones > 1) {
            res += '1';
            ones--;
        }
        while(zeros > 0) {
            res += '0';
            zeros--;
        }
        if(ones > 0) {
            res += '1';
        }
        return res;
    }
};
// @lc code=end


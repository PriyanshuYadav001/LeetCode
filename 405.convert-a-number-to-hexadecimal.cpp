/*
 * @lc app=leetcode id=405 lang=cpp
 *
 * [405] Convert a Number to Hexadecimal
 */

// @lc code=start
class Solution {
public:
    string toHex(int n) {
        if(n==0) return "0";
        string res="";
        unsigned int num=n;
        string str="0123456789abcdef";
        while(num){
            res=res+str[num%16];
            num/=16;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
// @lc code=end


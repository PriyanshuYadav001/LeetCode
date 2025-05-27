/*
 * @lc app=leetcode id=2108 lang=cpp
 *
 * [2108] Find First Palindromic String in the Array
 */

// @lc code=start
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto word:words){
            if(word==string(word.rbegin(),word.rend())) return word;
        }
        return "";
    }
};
// @lc code=end


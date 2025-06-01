/*
 * @lc app=leetcode id=1880 lang=cpp
 *
 * [1880] Check if Word Equals Summation of Two Words
 */

// @lc code=start
class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        string first="",second="",target="";
        for(char c:firstWord) first+=to_string(c-'a');
        for(char c:secondWord) second+=to_string(c-'a');
        for(char c:targetWord) target+=to_string(c-'a');
        return (stoi(first)+stoi(second))==stoi(target);
    }
};
// @lc code=end


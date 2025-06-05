/*
 * @lc app=leetcode id=3438 lang=cpp
 *
 * [3438] Find Valid Pair of Adjacent Digits in String
 */

// @lc code=start
class Solution {
public:
    string findValidPair(string s) {
        unordered_map<int, int> mp;
        for (char c : s) {
            mp[c - '0']++;
        }
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != s[i + 1] && mp[s[i] - '0'] == s[i] - '0' &&
                mp[s[i + 1] - '0'] == s[i + 1] - '0') {
                return s.substr(i, 2);
            }
        }
        return "";
    }
};
// @lc code=end


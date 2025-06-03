/*
 * @lc app=leetcode id=3456 lang=cpp
 *
 * [3456] Find Special Substring of Length K
 */

// @lc code=start
class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        for (int i = 0; i < s.size() - k + 1; i++) {
            unordered_set<char> st(s.begin() + i, s.begin() + i + k);
            if (st.size() == 1 && (i == 0 || s[i - 1] != s[i]) &&
                (i + k == s.size() || s[i + k] != s[i + k - 1]))
                return true;
        }
        return false;
    }
};
// @lc code=end


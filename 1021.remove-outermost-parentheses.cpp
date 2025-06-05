/*
 * @lc app=leetcode id=1021 lang=cpp
 *
 * [1021] Remove Outermost Parentheses
 */

// @lc code=start
class Solution {
public:
    string removeOuterParentheses(string s) {
        string res = "";
        int b = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                if (b > 0)
                    res += s[i];
                b++;
            } else {
                b--;
                if (b > 0)
                    res += s[i];
            }
        }
        return res;
    }
};
// @lc code=end


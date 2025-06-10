/*
 * @lc app=leetcode id=3442 lang=cpp
 *
 * [3442] Maximum Difference Between Even and Odd Frequency I
 */

// @lc code=start
class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> mp;
        int odd = 0;
        int even = INT_MAX;
        for (char c : s)
            mp[c]++;
        for (auto m : mp) {
            if (m.second % 2 == 0) even = min(even, m.second);
            else odd = max(odd, m.second);
        }
        return odd-even;

    }
};
// @lc code=end


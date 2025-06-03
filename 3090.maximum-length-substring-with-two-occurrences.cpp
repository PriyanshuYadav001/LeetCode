/*
 * @lc app=leetcode id=3090 lang=cpp
 *
 * [3090] Maximum Length Substring With Two Occurrences
 */

// @lc code=start
class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int res = 0;
        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                mp[s[j]]++;
                if (mp[s[j]] > 2)
                    break;
                res = max(res, j - i + 1);
            }
            mp.clear();
        }
        return res;
    }
};
// @lc code=end


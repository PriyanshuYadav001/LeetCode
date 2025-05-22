/*
 * @lc app=leetcode id=2224 lang=cpp
 *
 * [2224] Minimum Number of Operations to Convert Time
 */

// @lc code=start
class Solution {
public:
    int convertTime(string current, string correct) {
        int curr_min=(current[0]-'0')*600+(current[1]-'0')*60+(current[3]-'0')*10+(current[4]-'0');
        int corr_min=(correct[0]-'0')*600+(correct[1]-'0')*60+(correct[3]-'0')*10+(correct[4]-'0');

        int diff=corr_min-curr_min;
        return diff/60+diff%60/15+diff%15/5+diff%5;

    }
};
// @lc code=end


/*
 * @lc app=leetcode id=3407 lang=cpp
 *
 * [3407] Substring Matching Pattern
 */

// @lc code=start
class Solution {
public:
    bool hasMatch(string s, string p) {
        int pos=p.find('*');
        string first=p.substr(0,pos);
        string last=p.substr(pos+1);

        if(s.find(first)==-1) return false;
        if(s.find(last,s.find(first)+first.size())==-1) return false;
        return true;
    }
};
// @lc code=end


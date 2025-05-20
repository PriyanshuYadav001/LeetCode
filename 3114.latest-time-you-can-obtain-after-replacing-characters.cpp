/*
 * @lc app=leetcode id=3114 lang=cpp
 *
 * [3114] Latest Time You Can Obtain After Replacing Characters
 */

// @lc code=start
class Solution {
public:
    string findLatestTime(string s) {
        if(s[3]=='?') s[3]='5';
        if(s[4]=='?') s[4]='9';

        if(s[0]=='?'){
            if(s[1]=='?' || s[1]<'2') s[0]='1';
            else s[0]='0';
        }
        if(s[1]=='?'){
            if(s[0]=='1') s[1]='1';
            else s[1]='9';
        }
        return s;
    }
};
// @lc code=end


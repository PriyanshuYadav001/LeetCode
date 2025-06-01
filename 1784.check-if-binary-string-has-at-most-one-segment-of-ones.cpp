/*
 * @lc app=leetcode id=1784 lang=cpp
 *
 * [1784] Check if Binary String Has at Most One Segment of Ones
 */

// @lc code=start
class Solution {
public:
    bool checkOnesSegment(string s) {
        int segments=0;
        if(s[s.size()-1]=='1') segments++;
        for(int i=0;i<s.size()-1;i++){
            if(s.substr(i,2)=="10") segments++;
        }
        return segments<2;
    }
};



// @lc code=end


/*
 * @lc app=leetcode id=3228 lang=cpp
 *
 * [3228] Maximum Number of Operations to Move Ones to the End
 */

// @lc code=start
class Solution {
public:
    int maxOperations(string s) {
        int res=0;
        int ones=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') ones++;
            if(i>0 && s[i]<s[i-1]) res+=ones;
        }
        return res;
    }
};
// @lc code=end


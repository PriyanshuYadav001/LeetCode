/*
 * @lc app=leetcode id=1221 lang=cpp
 *
 * [1221] Split a String in Balanced Strings
 */

// @lc code=start
class Solution {
public:
    int balancedStringSplit(string s) {
        int n=s.size();
        int r=0, l=0,res=0;
        for(int j=0;j<n;j++){
            if(s[j]=='R') r++;
            else if(s[j]=='L') l++;
            
            if(r==l) res++;
        }
        return res;
    }
};
// @lc code=end


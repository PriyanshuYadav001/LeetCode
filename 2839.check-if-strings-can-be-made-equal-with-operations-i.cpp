/*
 * @lc app=leetcode id=2839 lang=cpp
 *
 * [2839] Check if Strings Can be Made Equal With Operations I
 */

// @lc code=start
class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        for(int i=0;i<s1.size()-2;i++){
            if(s1[i]!=s2[i]){
                if(s1[i+2]!=s2[i] || s2[i+2]!=s1[i]) return false;
                
            }
        }
        if(s1[s1.size()-1]!=s2[s1.size()-1]) return false;
        else if(s1[s1.size()-2]!=s2[s1.size()-2]) return false;
        return true;
    }
};
// @lc code=end


/*
 * @lc app=leetcode id=3295 lang=cpp
 *
 * [3295] Report Spam Message
 */

// @lc code=start
class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        unordered_set<string> st;
        int res=0;
        for(string s:bannedWords) st.insert(s);
        for(string s:message){
            if(st.find(s)!=st.end()) res++;
            if(res>1) return true;
        }
        return false;
    }
};
// @lc code=end


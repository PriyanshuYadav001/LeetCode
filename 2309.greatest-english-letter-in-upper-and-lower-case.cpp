/*
 * @lc app=leetcode id=2309 lang=cpp
 *
 * [2309] Greatest English Letter in Upper and Lower Case
 */

// @lc code=start
class Solution {
public:
    string greatestLetter(string s) {
        unordered_set<char> st;
        for(char c:s) st.insert(c);
        string res;
        for(char c='A';c<='Z';c++){
            if(st.find(tolower(c))!=st.end() && st.find(c)!=st.end()) res=c;
        }
        return res;
    }
};
// @lc code=end


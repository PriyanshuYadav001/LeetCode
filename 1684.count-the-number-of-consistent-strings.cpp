/*
 * @lc app=leetcode id=1684 lang=cpp
 *
 * [1684] Count the Number of Consistent Strings
 */

// @lc code=start
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int res=words.size();
        unordered_set<char> st;
        for(char c:allowed) st.insert(c);

        for(string word:words){
            for(char c:word){
                if(st.find(c)==st.end()){
                    res--;
                    break;
                }
            }
        }
        return res;
    }
};
// @lc code=end


/*
 * @lc app=leetcode id=1160 lang=cpp
 *
 * [1160] Find Words That Can Be Formed by Characters
 */

// @lc code=start
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_set<char> chr;
        for(char c:chars) chr.insert(c);
        int res=0;
        for(string word:words){
            int match=0;
            for(char x:word){
                if(chr.find(x)!=chr.end()){
                    match++;
                }
            }
            if(match==word.size()) res+=match;
        }
        return res;
    }
};
// @lc code=end


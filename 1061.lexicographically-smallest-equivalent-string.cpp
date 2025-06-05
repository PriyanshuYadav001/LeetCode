/*
 * @lc app=leetcode id=1061 lang=cpp
 *
 * [1061] Lexicographically Smallest Equivalent String
 */

// @lc code=start
class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        vector<char> ch(26);
        for(int i=0;i<26;i++)
            ch[i]='a'+i;

        for(int i=0;i<s1.size();i++){
            char toReplace = max(ch[s1[i]-'a'], ch[s2[i]-'a']);
            char replaceWith = min(ch[s1[i]-'a'], ch[s2[i]-'a']);
            for (int i=0; i<26; i++)
                if (ch[i] == toReplace)
                    ch[i] = replaceWith;
        }
        
        for(int i=0;i<baseStr.size();i++)
            baseStr[i] = ch[baseStr[i]-'a'];
        
        return baseStr;
    }
};
// @lc code=end


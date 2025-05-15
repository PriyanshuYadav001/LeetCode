/*
 * @lc app=leetcode id=290 lang=cpp
 *
 * [290] Word Pattern
 */

// @lc code=start
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> arr;
        stringstream ss(s);
        string word;
        while(ss>>word){
            arr.push_back(word);
        }

        if(pattern.size()!=arr.size()) return false;
        unordered_set<char> chr;
        for(char c:pattern) chr.insert(c);
        unordered_set<string> m;
        for(string st:arr) m.insert(st);
        if(m.size()!=chr.size()) return false;
        unordered_map<char,string> mp;
        int i=0;
        for(char c:pattern){
            if(mp.find(c)!=mp.end()){
                if(mp[c]!=arr[i]) return false;
            }
            else{
                mp[c]=arr[i];
            }
            i++;
        }
        return true;
    }
};
// @lc code=end

